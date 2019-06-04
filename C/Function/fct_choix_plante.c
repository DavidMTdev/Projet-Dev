#include "../header.h"

void ChoixPlante(int plante, int humidite, int luminosite, int temperature, int mois)
{
    int *humidite_plante;
    int *luminosite_plante;
    int *temperature_plante;
    int floraison_plante[12] = {};

    int result;

    switch (plante)
    {
    case 1:
        result = 0;
        break;
    case 2:
        result = 1;
        break;
    case 3:
        result = 2;
        break;
    case 4:
        result = 3;
        break;
    case 5:
        result = 4;
        break;
    case 6:
        result = 5;
        break;
    case 7:
        result = 6;
        break;
    case 8:
        result = 7;
        break;
    case 9:
        result = 8;
        break;
    case 10:
        result = 9;
        break;
    case 11:
        result = 10;
        break;
    case 12:
        result = 11;
        break;
    case 13:
        result = 12;
        break;
    case 14:
        result = 13;
        break;
    case 15:
        result = 14;
        break;
    case 16:
        result = 15;
        break;
    case 17:
        result = 16;
        break;
    case 18:
        result = 17;
        break;
    case 19:
        result = 18;
        break;
    case 20:
        result = 19;
        break;
    case 21:
        result = 20;
        break;
    case 22:
        result = 21;
        break;
    case 23:
        result = 22;
        break;
    case 24:
        result = 23;
        break;
    case 25:
        result = 24;
        break;
    case 26:
        result = 25;
        break;
    case 27:
        result = 26;
        break;
    case 28:
        result = 27;
        break;
    case 29:
        result = 28;
        break;
    case 30:
        result = 29;
        break;
    default:
        break;
    }
    infoPlante(&humidite_plante, &luminosite_plante, &temperature_plante, floraison_plante, result);
    Floraison(floraison_plante, mois);
    Humiditer(&humidite_plante, humidite);
    Luminositer(&luminosite_plante, luminosite);
    Temperature(&temperature_plante, temperature);
}
