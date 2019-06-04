#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "../header.h"
#include <windows.h>
#include <mysql.h>

int choix;

void Color(int Texte, int Fond)
{
    HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H, Fond * 16 + Texte);
}

void menu(int plante, int user)
{
    int humidite = 7;
    int luminosite = 7;
    int temperature = 7;
    int mois = 9;

    Color(2, 15);
    printf("\n                                                                                 PLANTE CONNECTEE                                                                                                                   \n");
    Color(15, 0);
    Color(6, 15);
    printf("\n                                                                                 MENU PRINCIPAL :                                                                                                                  \n\n");
    Color(15, 0);
    printf("1. Choix de la plante\n\n");
    printf("2. Caracteristiques de la plante\n\n");
    printf("3. Liste des plantes\n\n");
    printf("4. Liste des plantes de l'utilisateur\n\n");
    printf("5. Quitter\n\n\n");
    Color(2, 0);
    printf("Quel est votre choix ? ");
    scanf("%d", &choix);
    printf("\n");
    Color(15, 0);

    if (choix == 1)
    {
        showChoicePlante();

        Color(2, 0);
        printf("Quel est votre choix ? ");
        scanf("%d", &plante);
        printf("\n");
        Color(15, 0);

        insertChoice(plante, user);
    }

    else if (choix == 2)
    {
        //Mettre les caracteristiques de la plante choisie
        if (!(plante == 0))
        {
            ChoixPlante(plante, humidite, luminosite, temperature, mois);
            menu(plante, user);
        }
        else
        {
            menu(plante, user);
        }
    }

    else if (choix == 3)
    {
        //Mettre la liste des plantes
        showListPlante();
        menu(plante, user);
    }
    else if (choix == 4)
    {
        //Mettre la liste des plantes de l'utilisateur
        showListPlanteUser(user);
        menu(plante, user);
    }
    else if (choix == 5)
    {
        //Stop le script
        return 0;
    }
    else
    {
        menu(plante, user);
    }
}

void showListPlante()
{
    MYSQL mysql;
    mysql_init(&mysql);
    mysql_options(&mysql, MYSQL_READ_DEFAULT_GROUP, "option");
    mysql_real_connect(&mysql, "127.0.0.1", "root", "", "projet_dev", 0, NULL, 0);

    mysql_query(&mysql, "SELECT * FROM plante");

    MYSQL_RES *result;
    MYSQL_ROW row;

    result = mysql_store_result(&mysql);

    while ((row = mysql_fetch_row(result)) != NULL)
    {
        for (int i = 0; i < mysql_num_fields(result); i++)
        {
            printf("%s | ", row[i]);
        }
        printf("\n");
    }

    mysql_free_result(result);
}

void showChoicePlante()
{
    MYSQL mysql;
    mysql_init(&mysql);
    mysql_options(&mysql, MYSQL_READ_DEFAULT_GROUP, "option");
    mysql_real_connect(&mysql, "127.0.0.1", "root", "", "projet_dev", 0, NULL, 0);

    mysql_query(&mysql, "SELECT * FROM plante");

    MYSQL_RES *result;
    MYSQL_ROW row;

    result = mysql_store_result(&mysql);

    while ((row = mysql_fetch_row(result)) != NULL)
    {
        printf("[%s. %s]", row[0], row[1]);
        printf("\n");
    }

    mysql_free_result(result);
}

void insertChoice(int choice, int user)
{

    MYSQL mysql;
    mysql_init(&mysql);
    mysql_options(&mysql, MYSQL_READ_DEFAULT_GROUP, "option");
    mysql_real_connect(&mysql, "127.0.0.1", "root", "", "projet_dev", 0, NULL, 0);

    char requete[50] = "";

    sprintf(requete, "INSERT INTO choisir VALUES('%d', '%d')", choice, user);
    mysql_query(&mysql, requete);

    menu(choice, user);
}

void showListPlanteUser(int user)
{
    MYSQL mysql;
    mysql_init(&mysql);
    mysql_options(&mysql, MYSQL_READ_DEFAULT_GROUP, "option");
    mysql_real_connect(&mysql, "127.0.0.1", "root", "", "projet_dev", 0, NULL, 0);

    char requete[500] = "";

    sprintf(requete, "SELECT p.id_plante, nom_plante, description_plante, famille_plante FROM plante p JOIN choisir c ON c.id_plante = p.id_plante WHERE c.id_utilisateur = %d", user);
    mysql_query(&mysql, requete);

    MYSQL_RES *result;
    MYSQL_ROW row;

    result = mysql_store_result(&mysql);

    while ((row = mysql_fetch_row(result)) != NULL)
    {
        for (int i = 0; i < mysql_num_fields(result); i++)
        {
            printf("%s | ", row[i]);
        }
        printf("\n");
    }

    mysql_free_result(result);
}