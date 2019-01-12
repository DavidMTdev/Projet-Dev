#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    int plante = 1;
    int *humidite_plante;
    int *luminosite_plante;
    int *temperature_plante;
    int humidite = 7;
    int luminosite = 7;
    int temperature = 7;

    if (plante){
        ButomeEnOmbelle(&humidite_plante,&luminosite_plante,&temperature_plante);
        Humiditer(&humidite_plante,&luminosite_plante,&temperature_plante,humidite);
        Luminositer(&humidite_plante,&luminosite_plante,&temperature_plante,luminosite);
        Temperature(&humidite_plante,&luminosite_plante,&temperature_plante,temperature);
    }

    return 0;
}
