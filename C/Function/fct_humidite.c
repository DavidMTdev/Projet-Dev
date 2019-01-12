#include <stdio.h>
#include <stdlib.h>
#include "../header.h"

void Humiditer(int *humidite_plante,int *luminosite_plante,int *temperature_plante,int humidite)
{
    if (*humidite_plante < humidite)
    {
        printf("Il faut arroser votre plante au plus vite !\n");
    }
    else if (*humidite_plante > humidite)
    {
        printf("Vous avez trop arroser votre plante !\n");
    }
    else{
        printf("Votre plante n'a pas besoin d'etre arroser\n");
    }
}
