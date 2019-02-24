#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "../header.h"

int choix;

void Color(int Texte, int Fond)
{
    HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H, Fond * 16 + Texte);
}

void menu(int plante)
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
    printf("4. Quitter\n\n\n");
    Color(2, 0);
    printf("Quel est votre choix ? ");
    scanf("%d", &choix);
    printf("\n");
    Color(15, 0);

    if (choix == 1)
    {
        //Mettre le choix de la plante
        printf("1. Butome en ombrelle\n");
        printf("2. Muguet\n");
        printf("3. Digitale Pourpre\n");
        printf("4. Asperule odorante\n");
        printf("5. Lierre terrestre\n");
        printf("6. Cannabis\n");
        printf("7. Houblon\n");
        printf("8. Iris fetide\n");
        printf("9. Iris faux acore\n");
        printf("10. Knautie des champs\n");
        printf("11. Gesse des bois\n");
        printf("12. Salicaire commune\n");
        printf("13. Menthe pouliot\n");
        printf("14. Origan commun\n");
        printf("15. Anemone pulsatille\n");
        printf("16. Sauge des pres\n");
        printf("17. Scabieuse blanchatre\n");
        printf("18. Silene penche\n");
        printf("19. Epiaire des bois\n");
        printf("20. Petite pervenche\n");
        printf("21. Violette des chiens\n");
        printf("22. Fusain d Europe\n");
        printf("23. Rosier des chiens\n");
        printf("24. Rosier pimprenelle\n");
        printf("25. Viorne obier\n");
        printf("26. Achillee millefeuille\n");
        printf("27. Bugle de Geneve\n");
        printf("28. Guimauve officinale\n");
        printf("29. Paquerette\n");
        printf("30. Hysope\n");

        Color(2, 0);
        printf("Quel est votre choix ? ");
        scanf("%d", &plante);
        printf("\n");
        Color(15, 0);

        menu(plante);
    }

    else if (choix == 2)
    {
        //Mettre les caracteristiques de la plante choisie
        if (!(plante == 0))
        {
            ChoixPlante(plante, humidite, luminosite, temperature, mois);
            menu(plante);
        }
        else
        {
            menu(plante);
        }
    }

    else if (choix == 3)
    {
        //Mettre la liste des plantes
        printf("1. Butome en ombrelle\n");
        printf("2. Muguet\n");
        printf("3. Digitale Pourpre\n");
        printf("4. Asperule odorante\n");
        printf("5. Lierre terrestre\n");
        printf("6. Cannabis\n");
        printf("7. Houblon\n");
        printf("8. Iris fetide\n");
        printf("9. Iris faux acore\n");
        printf("10. Knautie des champs\n");
        printf("11. Gesse des bois\n");
        printf("12. Salicaire commune\n");
        printf("13. Menthe pouliot\n");
        printf("14. Origan commun\n");
        printf("15. Anemone pulsatille\n");
        printf("16. Sauge des pres\n");
        printf("17. Scabieuse blanchatre\n");
        printf("18. Silene penche\n");
        printf("19. Epiaire des bois\n");
        printf("20. Petite pervenche\n");
        printf("21. Violette des chiens\n");
        printf("22. Fusain d Europe\n");
        printf("23. Rosier des chiens\n");
        printf("24. Rosier pimprenelle\n");
        printf("25. Viorne obier\n");
        printf("26. Achillee millefeuille\n");
        printf("27. Bugle de Geneve\n");
        printf("28. Guimauve officinale\n");
        printf("29. Paquerette\n");
        printf("30. Hysope\n");
        menu(plante);
    }

    else if (choix == 4)
    {
        //Troiver un moyen de stopper le script
        return 0;
    }
}
