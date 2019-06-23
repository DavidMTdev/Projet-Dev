#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include <windows.h>
#include <mysql.h>

int main()
{

    MYSQL mysql;
    mysql_init(&mysql);
    mysql_options(&mysql, MYSQL_READ_DEFAULT_GROUP, "option");

    if (mysql_real_connect(&mysql, "127.0.0.1", "root", "", "projet_dev", 0, NULL, 0))
    {

        char requete[500] = "";

        sprintf(requete, "SELECT id_utilisateur, nom_utilisateur, prenom_utilisateur FROM utilisateur");
        mysql_query(&mysql, requete);

        MYSQL_RES *result;
        MYSQL_ROW row;

        result = mysql_store_result(&mysql);

        while ((row = mysql_fetch_row(result)) != NULL)
        {
            printf("[%s. %s %s]", row[0],row[1],row[2]);
            printf("\n");
        }

        int plante;
        int user;

        Color(2, 0);
        printf("Quel est votre choix ? ");
        scanf("%d", &user);
        printf("\n");
        Color(15, 0);

        menu(plante, user);
    }
    else
    {
        printf("Une erreur s'est produite lors de la connexion de la BDD!");
    }
    mysql_close(&mysql);
    return 0;
}
