#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include <windows.h>
#include <mysql.h>

int infoPlante(int *humidite_plante, int *luminosite_plante, int *temperature_plante, int *floraison_plante, int choice)
{
    MYSQL mysql;
    mysql_init(&mysql);
    mysql_options(&mysql, MYSQL_READ_DEFAULT_GROUP, "option");
    mysql_real_connect(&mysql, "127.0.0.1", "root", "", "projet_dev", 0, NULL, 0);

    mysql_query(&mysql, "SELECT * FROM plante p JOIN posseder po ON po.id_plante = p.id_plante JOIN caracteristique c ON po.id_caracteristique = c.id_caracteristique");

    MYSQL_RES *result;
    MYSQL_ROW row;

    result = mysql_store_result(&mysql);

    mysql_data_seek(result, choice);

    row = mysql_fetch_row(result);

    // * pour debug
    // for (int i = 0; i < mysql_num_fields(result); i++)
    // {
    //     printf("%s | ", row[i]);
    // }
    // printf("\n");

    char *nom_plante = row[1];
    char *categorie_plante = row[3];
    char *description_plante = row[2];
    char *mois_floraison_plante = row[10];

    *humidite_plante = atoi(row[7]);
    *luminosite_plante = atoi(row[9]);
    *temperature_plante = atoi(row[8]);

    // * decouper "mois_floraison_plante" pour définir des les mois en chiffre
    floraison_plante[0] = 6; // Juin
    floraison_plante[1] = 7; // Juillet
    floraison_plante[2] = 8; // aout

    showInfo(nom_plante, categorie_plante, description_plante, mois_floraison_plante);

    mysql_free_result(result);
}

void showInfo(char *nom_plante, char *categorie_plante, char *description_plante, char *mois_floraison_plante)
{
    printf("Nom de la plante : %s\n\n", nom_plante);
    printf("Categorie : %s\n\n", categorie_plante);
    printf("Description de la plante : %s\n\n", description_plante);
    printf("Periode de floraison : %s\n\n\n", mois_floraison_plante);
}