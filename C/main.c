#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include <windows.h>
#include <MYSQL/mysql.h>

int main()
{

    //D�claration du pointeur de structure de type MYSQL
    MYSQL mysql;
    //Initialisation de MySQL
    mysql_init(&mysql);
    //Options de connexion
    mysql_options(&mysql,MYSQL_READ_DEFAULT_GROUP,"option");

    //Si la connexion r�ussie...
    if(mysql_real_connect(&mysql,"127.0.0.1","root","","projet_dev",0,NULL,0))
    {
        //Requ�te qui s�lectionne tout dans ma table scores
        mysql_query(&mysql, "SELECT * FROM plante");

        //D�claration des objets
        MYSQL_RES *result = NULL;
        MYSQL_ROW row;

        unsigned int i = 0;
        unsigned int num_champs = 0;

        //On met le jeu de r�sultat dans le pointeur result
        result = mysql_use_result(&mysql);

        //On r�cup�re le nombre de champs
        num_champs = mysql_num_fields(result);

        //Tant qu'il y a encore un r�sultat ...
        while ((row = mysql_fetch_row(result)))
        {
            //On d�clare un pointeur long non sign� pour y stocker la taille des valeurs
            unsigned long *lengths;

            //On stocke ces tailles dans le pointeur
            lengths = mysql_fetch_lengths(result);

            //On fait une boucle pour avoir la valeur de chaque champs
            for(i = 0; i < num_champs; i++)
            {
               //On ecrit toutes les valeurs
               printf("[%.*s] ", (int) lengths[i], row[i]);
            }
            printf("\n");
        }

        //Lib�ration du jeu de r�sultat
        mysql_free_result(result);

        //Fermeture de MySQL
        mysql_close(&mysql);

    }
    else  //Sinon ...
    {
        printf("Une erreur s'est produite lors de la connexion � la BDD!");
    }

    return 0;





    int plante = 0;
    menu(plante);

    return 0;
}
