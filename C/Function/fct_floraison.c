#include <stdio.h>
#include <stdlib.h>
#include "../header.h"

int Floraison(int *floraison_plante, int mois)
{
    int count = 0;

    for(int i = 0; i < 12; i++)
        {
            if (floraison_plante[i] >= 1 && floraison_plante[i] <= 12) {
                count ++;
            }

        }

    int mois_de_floraison[count];

    for(int i = 0; i < count; i++)
    {
        mois_de_floraison[i] = floraison_plante[i];
    }
 
    if (count == 1) {
        
        if (mois_de_floraison[0] == mois) {
            printf("La plante est dans son mois de floraison\n");
        }
        else
        {
            printf("La plante n'est pas dans son mois de floraison\n");
        }
        
    }
    else
    {

        if (mois_de_floraison[0] <= mois && mois_de_floraison[count - 1] >= mois) {
        printf("La plante est dans son mois de floraison\n");
        }
        else
        {
        printf("La plante n'est pas dans son mois de floraison\n");
        }

    }

}