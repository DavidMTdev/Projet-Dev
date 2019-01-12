#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int ButomeEnOmbelle(int *humidite_plante,int *luminosite_plante,int *temperature_plante)
{
    char nom_plante[] = "Butome en ombelle";
    char categorie_plante[] = "Ordre : Alismatales\nFamille : Butomaceae\nGenre : Butomus\n ";
    char description_plante[] = "- Plante vivace de 50 cm à 1 mètre, glabre, à souche horizontale charnue\n- tige nue dressée, raide, cylindrique\n- feuilles toutes radicales, dressées hors de l'eau, sessiles, très longues, linéaires-triquètres, acuminées, entières\n- fleurs rosées, assez grandes en ombelle terminale, accompagnée de 2-4 courtes bractées lancéolées, à rayons nombreux et inégaux \n- périanthe coloré, à divisions peu inégales, les 3 internes un peu plus grandes et persistantes\n- 9 étamines\n- styles arqués, persistants\n- fruit presque capsulaire, à 6 carpelles obliquement ovales, acuminés, soudés à la base, polyspermes, s'ouvrant en dedans.\n ";
    *humidite_plante = 7;
    *luminosite_plante = 6;
    *temperature_plante = 4;

    printf("Nom de la plante : %s\n\n", nom_plante);
    printf("Categorie :\n%s\n", categorie_plante);
    printf("Description de la plante :\n%s\n", description_plante);
}
