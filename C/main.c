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
        int plante;
        int user = 2;
        menu(plante, user);
    }
    else
    {
        printf("Une erreur s'est produite lors de la connexion de la BDD!");
    }
    mysql_close(&mysql);
    return 0;
}
