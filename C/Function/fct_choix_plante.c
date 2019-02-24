#include "../header.h"

void ChoixPlante(int plante, int humidite, int luminosite, int temperature, int mois)
{
    int *humidite_plante;
    int *luminosite_plante;
    int *temperature_plante;
    int floraison_plante[12] = {};

    if (plante == 1)
    {
        ButomeEnOmbelle(&humidite_plante, &luminosite_plante, &temperature_plante, floraison_plante);
    }

    else if (plante == 2)
    {
        Muguet(&humidite_plante, &luminosite_plante, &temperature_plante, floraison_plante);
    }

    else if (plante == 3)
    {
        Digitale_pourpre(&humidite_plante, &luminosite_plante, &temperature_plante, floraison_plante);
    }

    else if (plante == 4)
    {
        Asperule_odorante(&humidite_plante, &luminosite_plante, &temperature_plante, floraison_plante);
    }

    else if (plante == 5)
    {
        Lierre_terrestre(&humidite_plante, &luminosite_plante, &temperature_plante, floraison_plante);
    }

    else if (plante == 6)
    {
        Cannabis(&humidite_plante, &luminosite_plante, &temperature_plante, floraison_plante);
    }

    else if (plante == 7)
    {
        Houblon(&humidite_plante, &luminosite_plante, &temperature_plante, floraison_plante);
    }

    else if (plante == 8)
    {
        Iris_fetide(&humidite_plante, &luminosite_plante, &temperature_plante, floraison_plante);
    }

    else if (plante == 9)
    {
        Iris_faux_acore(&humidite_plante, &luminosite_plante, &temperature_plante, floraison_plante);
    }

    else if (plante == 10)
    {
        Knautie_des_champs(&humidite_plante, &luminosite_plante, &temperature_plante, floraison_plante);
    }

    else if (plante == 11)
    {
        Gesse_des_bois(&humidite_plante, &luminosite_plante, &temperature_plante, floraison_plante);
    }

    else if (plante == 12)
    {
        Salicaire_commune(&humidite_plante, &luminosite_plante, &temperature_plante, floraison_plante);
    }

    else if (plante == 13)
    {
        Menthe_pouliot(&humidite_plante, &luminosite_plante, &temperature_plante, floraison_plante);
    }

    else if (plante == 14)
    {
        Origan_commun(&humidite_plante, &luminosite_plante, &temperature_plante, floraison_plante);
    }

    else if (plante == 15)
    {
        Anemone_pulsatille(&humidite_plante, &luminosite_plante, &temperature_plante, floraison_plante);
    }

    else if (plante == 16)
    {
        Sauge_des_pres(&humidite_plante, &luminosite_plante, &temperature_plante, floraison_plante);
    }

    else if (plante == 17)
    {
        Scabieuse_blanchatre(&humidite_plante, &luminosite_plante, &temperature_plante, floraison_plante);
    }

    else if (plante == 18)
    {
        Silene_penche(&humidite_plante, &luminosite_plante, &temperature_plante, floraison_plante);
    }

    else if (plante == 19)
    {
        Epiaire_des_bois(&humidite_plante, &luminosite_plante, &temperature_plante, floraison_plante);
    }

    else if (plante == 20)
    {
        Petite_pervenche(&humidite_plante, &luminosite_plante, &temperature_plante, floraison_plante);
    }

    else if (plante == 21)
    {
        Violette_des_chiens(&humidite_plante, &luminosite_plante, &temperature_plante, floraison_plante);
    }

    else if (plante == 22)
    {
        Fusain_d_Europe(&humidite_plante, &luminosite_plante, &temperature_plante, floraison_plante);
    }

    else if (plante == 23)
    {
        Rosier_des_chiens(&humidite_plante, &luminosite_plante, &temperature_plante, floraison_plante);
    }

    else if (plante == 24)
    {
        Rosier_pimprenelle(&humidite_plante, &luminosite_plante, &temperature_plante, floraison_plante);
    }

    else if (plante == 25)
    {
        Viorne_obier(&humidite_plante, &luminosite_plante, &temperature_plante, floraison_plante);
    }

    else if (plante == 26)
    {
        Achillee_millefeuille(&humidite_plante, &luminosite_plante, &temperature_plante, floraison_plante);
    }

    else if (plante == 27)
    {
        Bugle_de_Geneve(&humidite_plante, &luminosite_plante, &temperature_plante, floraison_plante);
    }

    else if (plante == 28)
    {
        Guimauve_officinale(&humidite_plante, &luminosite_plante, &temperature_plante, floraison_plante);
    }

    else if (plante == 29)
    {
        Paquerette(&humidite_plante, &luminosite_plante, &temperature_plante, floraison_plante);
    }

    else if (plante == 30)
    {
        Hysope(&humidite_plante, &luminosite_plante, &temperature_plante, floraison_plante);
    }

    Floraison(floraison_plante, mois);
    Humiditer(&humidite_plante, humidite);
    Luminositer(&luminosite_plante, luminosite);
    Temperature(&temperature_plante, temperature);
}
