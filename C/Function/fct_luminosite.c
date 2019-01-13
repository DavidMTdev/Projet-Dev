#include <stdio.h>
#include <stdlib.h>
#include "../header.h"

void Luminositer(int *luminosite_plante,int luminosite)
{
    if (*luminosite_plante < luminosite)
    {
        printf("Il y a trop de lumiere sur votre plante !\n");
    }
    else if (*luminosite_plante > luminosite)
    {
        printf("Il faut de la lumiere à votre plante au plus vite !\n");
    }
    else{
        printf("Votre plante a la luminosite neccessaire\n");
    }
}
