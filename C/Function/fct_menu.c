#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "../header.h"

int choix;

void Color(int Texte,int Fond)
{
    HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H, Fond * 16 + Texte);
}

void menu()
{

    Color(2,15);
    printf("\n                                                                                 PLANTE CONNECTEE                                                                                                                   \n");
    Color(15,0);
    Color(6,15);
    printf("\n                                                                                 MENU PRINCIPAL :                                                                                                                  \n\n");
    Color(15,0);
    printf("1. Choix de la plante\n\n");
    printf("2. Caracteristiques de la plante\n\n");
    printf("3. Liste des plantes\n\n");
    printf("4. Quitter\n\n\n");
    Color(2,0);
    printf("Quel est votre choix ? ");
    scanf("%d",&choix);
    Color(15,0);


    if (choix == 1)
    {
    //Mettre le choix de la plante
    }

    else if (choix == 2)
    {
    //Mettre les caracteristiques de la plante choisie
    }

    else if (choix == 3)
    {
    //Mettre la liste des plantes
    }

    else if (choix == 4)
    {
    //Troiver un moyen de stopper le script
    }
}
