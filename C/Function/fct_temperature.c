#include <stdio.h>
#include <stdlib.h>
#include "../header.h"

void Temperature(int *temperature_plante,int temperature)
{
    if (*temperature_plante < temperature)
    {
        printf("Il y a trop de chaleur pour votre plante !\n");
    }
    else if (*temperature_plante > temperature)
    {
        printf("Il faut refroidir votre plante au plus vite !\n");
    }
    else{
        printf("Votre plante a la temperature neccessaire\n");
    }
}
