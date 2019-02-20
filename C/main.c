#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    menu();
    int plante = 1;
    int *humidite_plante;
    int *luminosite_plante;
    int *temperature_plante;
    int floraison_plante[12] = {};
    int humidite = 7;
    int luminosite = 7;
    int temperature = 7;
    int mois = 9;

    if (plante){
        ButomeEnOmbelle(&humidite_plante, &luminosite_plante, &temperature_plante, floraison_plante);
        Floraison(floraison_plante,mois);
        Humiditer(&humidite_plante, humidite);
        Luminositer(&luminosite_plante, luminosite);
        Temperature(&temperature_plante, temperature);
    }

    return 0;
}
