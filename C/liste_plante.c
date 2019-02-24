#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int ButomeEnOmbelle(int *humidite_plante, int *luminosite_plante, int *temperature_plante, int *floraison_plante)
{
    char nom_plante[] = "Butome en ombelle";
    char categorie_plante[] = "Ordre : Alismatales\nFamille : Butomaceae\nGenre : Butomus\n ";
    char description_plante[] = "- Plante vivace de 50 cm à 1 mètre, glabre, à souche horizontale charnue\n- tige nue dressée, raide, cylindrique\n- feuilles toutes radicales, dressées hors de l'eau, sessiles, très longues, linéaires-triquètres, acuminées, entières\n- fleurs rosées, assez grandes en ombelle terminale, accompagnée de 2-4 courtes bractées lancéolées, à rayons nombreux et inégaux \n- périanthe coloré, à divisions peu inégales, les 3 internes un peu plus grandes et persistantes\n- 9 étamines\n- styles arqués, persistants\n- fruit presque capsulaire, à 6 carpelles obliquement ovales, acuminés, soudés à la base, polyspermes, s'ouvrant en dedans.\n ";
    char mois_floraison_plante[] = "Juin - Aout ";
    *humidite_plante = 7;
    *luminosite_plante = 6;
    *temperature_plante = 4;
    floraison_plante[0] = 6; // Juin
    floraison_plante[1] = 7; // Juillet
    floraison_plante[2] = 8; // aout

    printf("Nom de la plante : %s\n\n", nom_plante);
    printf("Categorie :\n%s\n", categorie_plante);
    printf("Description de la plante :\n%s\n", description_plante);
    printf("Periode de floraison : %s\n\n", mois_floraison_plante);
}

int Muguet(int *humidite_plante, int *luminosite_plante, int *temperature_plante, int *floraison_plante)
{
    char nom_plante[] = "Muguet";
    char categorie_plante[] = "Ordre : 	Liliales\nFamille : Liliacées\nGenre : 	Convallaria\n ";
    char description_plante[] = "- Plante vivace de 30-60 cm, glabre, à souche horizontale épaisse très fibreuse .\n ";
    char mois_floraison_plante[] = "Mai-Juillet ";
    *humidite_plante = 2;
    *luminosite_plante = 6;
    *temperature_plante = 2;
    floraison_plante[0] = 5;
    floraison_plante[1] = 6;
    floraison_plante[2] = 7;

    printf("Nom de la plante : %s\n\n", nom_plante);
    printf("Categorie :\n%s\n", categorie_plante);
    printf("Description de la plante :\n%s\n", description_plante);
    printf("Periode de floraison : %s\n\n", mois_floraison_plante);
}

int Digitale_pourpre(int *humidite_plante, int *luminosite_plante, int *temperature_plante, int *floraison_plante)
{
    char nom_plante[] = "Digitale_pourpre";
    char categorie_plante[] = "Ordre : 		Scrophulariales\nFamille : 	Scrophulariaceae\nGenre : Digitalis\n ";
    char description_plante[] = "- Plante bisannuelle ou vivace de 50 cm à 1 m. 50, tomenteuse-blanchâtre, à tige robuste, creuse, lâchement feuillée .\n ";
    char mois_floraison_plante[] = "Mai-Septembre";
    *humidite_plante = 3;
    *luminosite_plante = 5;
    *temperature_plante = 5;
    floraison_plante[0] = 5;
    floraison_plante[1] = 6;
    floraison_plante[3] = 7;
    floraison_plante[4] = 8;
    floraison_plante[5] = 9;

    printf("Nom de la plante : %s\n\n", nom_plante);
    printf("Categorie :\n%s\n", categorie_plante);
    printf("Description de la plante :\n%s\n", description_plante);
    printf("Periode de floraison : %s\n\n", mois_floraison_plante);
}

int Asperule_odorante(int *humidite_plante, int *luminosite_plante, int *temperature_plante, int *floraison_plante)
{
    char nom_plante[] = "Asperule_odorante";
    char categorie_plante[] = "Ordre : 	Rubiales\nFamille : 	Rubiaceae\nGenre : Galium\n ";
    char description_plante[] = "- Plante vivace de 10-30 cm, glabre, noirâtre et odorante après la dessiccation, à souche grêle, longuement traçante \n ";
    char mois_floraison_plante[] = "mai – juin";
    *humidite_plante = 3;
    *luminosite_plante = 3;
    *temperature_plante = 4;
    floraison_plante[0] = 5;

    printf("Nom de la plante : %s\n\n", nom_plante);
    printf("Categorie :\n%s\n", categorie_plante);
    printf("Description de la plante :\n%s\n", description_plante);
    printf("Periode de floraison : %s\n\n", mois_floraison_plante);
}

int Lierre_terrestre(int *humidite_plante, int *luminosite_plante, int *temperature_plante, int *floraison_plante)
{
    char nom_plante[] = "Lierre terrestre";
    char categorie_plante[] = "Ordre : Lamiales\nFamille : Lamiaceae\nGenre : Glechoma\n ";
    char description_plante[] = "- Plante vivace, mollement poilue, couchée-radicante, à tiges florifères redressées, simples, longues de 5-25 cm \n ";
    char mois_floraison_plante[] = "mars - mai ";
    *humidite_plante = 4;
    *luminosite_plante = 4;
    *temperature_plante = 4;
    floraison_plante[0] = 3;
    floraison_plante[1] = 4;
    floraison_plante[2] = 5;

    printf("Nom de la plante : %s\n\n", nom_plante);
    printf("Categorie :\n%s\n", categorie_plante);
    printf("Description de la plante :\n%s\n", description_plante);
    printf("Periode de floraison : %s\n\n", mois_floraison_plante);
}

int Cannabis(int *humidite_plante, int *luminosite_plante, int *temperature_plante, int *floraison_plante)
{
    char nom_plante[] = "cannabis";
    char categorie_plante[] = "Ordre : Rosales\nFamille : Cannabaceae\nGenre : Cannabis\n ";
    char description_plante[] = "-Plante annuelle de 1-2 mètres, pubescente-rude, à odeur forte\n ";
    char mois_floraison_plante[] = "juin - septembre ";
    *humidite_plante = 3;
    *luminosite_plante = 7;
    *temperature_plante = 5;
    floraison_plante[0] = 6;
    floraison_plante[1] = 7;
    floraison_plante[2] = 8;
    floraison_plante[3] = 9;

    printf("Nom de la plante : %s\n\n", nom_plante);
    printf("Categorie :\n%s\n", categorie_plante);
    printf("Description de la plante :\n%s\n", description_plante);
    printf("Periode de floraison : %s\n\n", mois_floraison_plante);
}

int Houblon(int *humidite_plante, int *luminosite_plante, int *temperature_plante, int *floraison_plante)
{
    char nom_plante[] = "Houblon";
    char categorie_plante[] = "Ordre : 	Urticales\nFamille : Cannabaceae\nGenre : Humulus\n ";
    char description_plante[] = "-Plante vivace de 2-5 mètres, rude, à tiges herbacées, sarmenteuses-volubiles, rameuses \n ";
    char mois_floraison_plante[] = "juin - septembre ";
    *humidite_plante = 4;
    *luminosite_plante = 4;
    *temperature_plante = 4;
    floraison_plante[0] = 6;
    floraison_plante[1] = 7;
    floraison_plante[2] = 8;
    floraison_plante[3] = 9;

    printf("Nom de la plante : %s\n\n", nom_plante);
    printf("Categorie :\n%s\n", categorie_plante);
    printf("Description de la plante :\n%s\n", description_plante);
    printf("Periode de floraison : %s\n\n", mois_floraison_plante);
}

int Hysope(int *humidite_plante, int *luminosite_plante, int *temperature_plante, int *floraison_plante)
{
    char nom_plante[] = "Hysope";
    char categorie_plante[] = "Ordre : Lamiales\nFamille : 	Lamiaceae\nGenre : Hyssopus\n ";
    char description_plante[] = "-Plante vivace de 20-50 cm, glabre ou glabrescente, verte, aromatique \n ";
    char mois_floraison_plante[] = "Juillet-août";
    *humidite_plante = 2;
    *luminosite_plante = 7;
    *temperature_plante = 2;
    floraison_plante[0] = 7;
    floraison_plante[1] = 8;

    printf("Nom de la plante : %s\n\n", nom_plante);
    printf("Categorie :\n%s\n", categorie_plante);
    printf("Description de la plante :\n%s\n", description_plante);
    printf("Periode de floraison : %s\n\n", mois_floraison_plante);
}

int Iris_fetide(int *humidite_plante, int *luminosite_plante, int *temperature_plante, int *floraison_plante)
{
    char nom_plante[] = "Iris fétide";
    char categorie_plante[] = "Ordre : Liliales\nFamille : Iridaceae\nGenre : 	Iris\n ";
    char description_plante[] = "-Plante vivace de 30-80 cm, glabre, fétide par le froissement, à rhizome épais\n ";
    char mois_floraison_plante[] = "Mai – juillet";
    *humidite_plante = 2;
    *luminosite_plante = 4;
    *temperature_plante = 6;
    floraison_plante[0] = 5;
    floraison_plante[1] = 6;
    floraison_plante[2] = 7;

    printf("Nom de la plante : %s\n\n", nom_plante);
    printf("Categorie :\n%s\n", categorie_plante);
    printf("Description de la plante :\n%s\n", description_plante);
    printf("Periode de floraison : %s\n\n", mois_floraison_plante);
}

int Iris_faux_acore(int *humidite_plante, int *luminosite_plante, int *temperature_plante, int *floraison_plante)
{
    char nom_plante[] = "Iris faux acore";
    char categorie_plante[] = "Ordre : Liliales\nFamille : Iridaceae\nGenre : 	Iris\n ";
    char description_plante[] = "-Plante vivace de 40 cm à 1 mètre, glabre, inodore, à rhizome épais\n ";
    char mois_floraison_plante[] = "Avril – juillet";
    *humidite_plante = 6;
    *luminosite_plante = 6;
    *temperature_plante = 4;
    floraison_plante[0] = 4;
    floraison_plante[1] = 5;
    floraison_plante[2] = 6;
    floraison_plante[3] = 7;

    printf("Nom de la plante : %s\n\n", nom_plante);
    printf("Categorie :\n%s\n", categorie_plante);
    printf("Description de la plante :\n%s\n", description_plante);
    printf("Periode de floraison : %s\n\n", mois_floraison_plante);
}

int Knautie_des_champs(int *humidite_plante, int *luminosite_plante, int *temperature_plante, int *floraison_plante)
{
    char nom_plante[] = "Knautie des champs";
    char categorie_plante[] = "Ordre : Dipsacales\nFamille : Dipsacaceae\nGenre :Knautia\n ";
    char description_plante[] = "-Plante vivace de 20-80 cm, velue, à souche épaisse et oblique \n ";
    char mois_floraison_plante[] = "juin – août";
    *humidite_plante = 2;
    *luminosite_plante = 6;
    *temperature_plante = 4;
    floraison_plante[0] = 6;
    floraison_plante[1] = 7;
    floraison_plante[2] = 8;

    printf("Nom de la plante : %s\n\n", nom_plante);
    printf("Categorie :\n%s\n", categorie_plante);
    printf("Description de la plante :\n%s\n", description_plante);
    printf("Periode de floraison : %s\n\n", mois_floraison_plante);
}

int Gesse_des_bois(int *humidite_plante, int *luminosite_plante, int *temperature_plante, int *floraison_plante)
{
    char nom_plante[] = "Gesse des bois";
    char categorie_plante[] = "Ordre : Fabales\nFamille : Fabaceae\nGenre :	Lathyrus\n ";
    char description_plante[] = "-Plante vivace de 1 à 2 mètres, glabre\n ";
    char mois_floraison_plante[] = "juin – août";
    *humidite_plante = 3;
    *luminosite_plante = 5;
    *temperature_plante = 5;
    floraison_plante[0] = 6;
    floraison_plante[1] = 7;
    floraison_plante[2] = 8;

    printf("Nom de la plante : %s\n\n", nom_plante);
    printf("Categorie :\n%s\n", categorie_plante);
    printf("Description de la plante :\n%s\n", description_plante);
    printf("Periode de floraison : %s\n\n", mois_floraison_plante);
}

int Salicaire_commune(int *humidite_plante, int *luminosite_plante, int *temperature_plante, int *floraison_plante)
{
    char nom_plante[] = "Salicaire commune";
    char categorie_plante[] = "Ordre : Myrtales\nFamille : Lythraceae\nGenre :Lythrum\n ";
    char description_plante[] = "-Plante vivace de 50 cm, à 1 mètre, dressée, robuste, pubescente dans le haut, à souche épaisse\n ";
    char mois_floraison_plante[] = "juin – septembre";
    *humidite_plante = 4;
    *luminosite_plante = 6;
    *temperature_plante = 4;
    floraison_plante[0] = 6;
    floraison_plante[1] = 7;
    floraison_plante[2] = 8;
    floraison_plante[3] = 9;

    printf("Nom de la plante : %s\n\n", nom_plante);
    printf("Categorie :\n%s\n", categorie_plante);
    printf("Description de la plante :\n%s\n", description_plante);
    printf("Periode de floraison : %s\n\n", mois_floraison_plante);
}

int Menthe_pouliot(int *humidite_plante, int *luminosite_plante, int *temperature_plante, int *floraison_plante)
{
    char nom_plante[] = "Menthe pouliot";
    char categorie_plante[] = "Ordre : 	Lamiales\nFamille : Lamiaceae\nGenre :	Mentha\n ";
    char description_plante[] = "-Plante vivace de 10-50 cm, velue-grisâtre ou glabrescente, à odeur très forte \n ";
    char mois_floraison_plante[] = "juillet – octobre";
    *humidite_plante = 5;
    *luminosite_plante = 7;
    *temperature_plante = 6;
    floraison_plante[0] = 7;
    floraison_plante[1] = 8;
    floraison_plante[2] = 9;
    floraison_plante[3] = 10;

    printf("Nom de la plante : %s\n\n", nom_plante);
    printf("Categorie :\n%s\n", categorie_plante);
    printf("Description de la plante :\n%s\n", description_plante);
    printf("Periode de floraison : %s\n\n", mois_floraison_plante);
}

int Origan_commun(int *humidite_plante, int *luminosite_plante, int *temperature_plante, int *floraison_plante)
{
    char nom_plante[] = "Origan commun";
    char categorie_plante[] = "Ordre : 	Lamiales\nFamille : Lamiaceae\nGenre :	Origanum\n ";
    char description_plante[] = "- Plante vivace de 30-80 cm, poilue, souvent rougeâtre, aromatique \n ";
    char mois_floraison_plante[] = "juillet – septembre";
    *humidite_plante = 3;
    *luminosite_plante = 5;
    *temperature_plante = 4;
    floraison_plante[0] = 7;
    floraison_plante[1] = 8;
    floraison_plante[2] = 9;

    printf("Nom de la plante : %s\n\n", nom_plante);
    printf("Categorie :\n%s\n", categorie_plante);
    printf("Description de la plante :\n%s\n", description_plante);
    printf("Periode de floraison : %s\n\n", mois_floraison_plante);
}

int Anemone_pulsatille(int *humidite_plante, int *luminosite_plante, int *temperature_plante, int *floraison_plante)
{
    char nom_plante[] = "Anémone pulsatille";
    char categorie_plante[] = "Ordre : 	Ranunculales\nFamille : Ranunculaceae\nGenre :	Anemone\n ";
    char description_plante[] = "- fleur médicinale vivace\n ";
    char mois_floraison_plante[] = "avril – juin";
    *humidite_plante = 1;
    *luminosite_plante = 7;
    *temperature_plante = 5;
    floraison_plante[0] = 4;
    floraison_plante[1] = 5;
    floraison_plante[2] = 6;

    printf("Nom de la plante : %s\n\n", nom_plante);
    printf("Categorie :\n%s\n", categorie_plante);
    printf("Description de la plante :\n%s\n", description_plante);
    printf("Periode de floraison : %s\n\n", mois_floraison_plante);
}

int Sauge_des_pres(int *humidite_plante, int *luminosite_plante, int *temperature_plante, int *floraison_plante)
{
    char nom_plante[] = "Sauge des prés";
    char categorie_plante[] = "Ordre : 	Lamiales\nFamille : Lamiaceae\nGenre :Salvia\n ";
    char description_plante[] = "- Plante vivace de 35-80 cm, velue, simple ou peu rameuse, odorante\n ";
    char mois_floraison_plante[] = "mai – juillet";
    *humidite_plante = 2;
    *luminosite_plante = 7;
    *temperature_plante = 6;
    floraison_plante[0] = 5;
    floraison_plante[1] = 6;
    floraison_plante[2] = 7;

    printf("Nom de la plante : %s\n\n", nom_plante);
    printf("Categorie :\n%s\n", categorie_plante);
    printf("Description de la plante :\n%s\n", description_plante);
    printf("Periode de floraison : %s\n\n", mois_floraison_plante);
}

int Scabieuse_blanchatre(int *humidite_plante, int *luminosite_plante, int *temperature_plante, int *floraison_plante)
{
    char nom_plante[] = "Scabieuse blanchâtre";
    char categorie_plante[] = "Ordre : 	Dipsacales\nFamille : Caprifoliaceae\nGenre :Scabiosa\n ";
    char description_plante[] = "-Plante vivace de 20-40 cm, glabrescente, à tiges peu rameuses, feuillées\n ";
    char mois_floraison_plante[] = "juillet – septembre";
    *humidite_plante = 2;
    *luminosite_plante = 7;
    *temperature_plante = 5;
    floraison_plante[0] = 7;
    floraison_plante[1] = 8;
    floraison_plante[2] = 9;

    printf("Nom de la plante : %s\n\n", nom_plante);
    printf("Categorie :\n%s\n", categorie_plante);
    printf("Description de la plante :\n%s\n", description_plante);
    printf("Periode de floraison : %s\n\n", mois_floraison_plante);
}

int Silene_penche(int *humidite_plante, int *luminosite_plante, int *temperature_plante, int *floraison_plante)
{
    char nom_plante[] = "Silène penché";
    char categorie_plante[] = "Ordre : Caryophyllales\nFamille : Caryophyllaceae\nGenre :Silene\n ";
    char description_plante[] = "-Plante vivace, velue, à souche presque ligneuse  tiges de 20-50 cm, simples ou peu rameuses, visqueuses dans le haut, peu feuillées\n ";
    char mois_floraison_plante[] = "mai – juillet";
    *humidite_plante = 3;
    *luminosite_plante = 5;
    *temperature_plante = 5;
    floraison_plante[0] = 5;
    floraison_plante[1] = 6;
    floraison_plante[2] = 7;

    printf("Nom de la plante : %s\n\n", nom_plante);
    printf("Categorie :\n%s\n", categorie_plante);
    printf("Description de la plante :\n%s\n", description_plante);
    printf("Periode de floraison : %s\n\n", mois_floraison_plante);
}

int Epiaire_des_bois(int *humidite_plante, int *luminosite_plante, int *temperature_plante, int *floraison_plante)
{
    char nom_plante[] = "Épiaire des bois";
    char categorie_plante[] = "Ordre :Lamiales\nFamille :Lamiaceae\nGenre :	Stachys\n ";
    char description_plante[] = "-Ortie puante. Plante vivace de 30 cm à 1 mètre, très velue, verte, à souche rampante, à odeur fétide\n ";
    char mois_floraison_plante[] = "juin – septembre";
    *humidite_plante = 4;
    *luminosite_plante = 3;
    *temperature_plante = 4;
    floraison_plante[0] = 6;
    floraison_plante[1] = 7;
    floraison_plante[2] = 8;
    floraison_plante[3] = 9;

    printf("Nom de la plante : %s\n\n", nom_plante);
    printf("Categorie :\n%s\n", categorie_plante);
    printf("Description de la plante :\n%s\n", description_plante);
    printf("Periode de floraison : %s\n\n", mois_floraison_plante);
}

int Petite_pervenche(int *humidite_plante, int *luminosite_plante, int *temperature_plante, int *floraison_plante)
{
    char nom_plante[] = "Petite pervenche";
    char categorie_plante[] = "Ordre :Gentianales\nFamille :Apocynaceae\nGenre :Vinca\n ";
    char description_plante[] = "-Plante vivace, glabre, couchée-diffuse, à tiges persistantes, radicantes, longues de 1-2 mètres \n ";
    char mois_floraison_plante[] = "Février-mai";
    *humidite_plante = 3;
    *luminosite_plante = 2;
    *temperature_plante = 5;
    floraison_plante[0] = 2;
    floraison_plante[1] = 3;
    floraison_plante[2] = 4;
    floraison_plante[3] = 5;

    printf("Nom de la plante : %s\n\n", nom_plante);
    printf("Categorie :\n%s\n", categorie_plante);
    printf("Description de la plante :\n%s\n", description_plante);
    printf("Periode de floraison : %s\n\n", mois_floraison_plante);
}

int Violette_des_chiens(int *humidite_plante, int *luminosite_plante, int *temperature_plante, int *floraison_plante)
{
    char nom_plante[] = "Violette des chiens";
    char categorie_plante[] = "Ordre :	Violales\nFamille :	Violaceae\nGenre :	Viola\n ";
    char description_plante[] = "-tiges de 5-40 cm, herbacées, dressées ou ascendantes, naissant de la souche \n ";
    char mois_floraison_plante[] = "avril – juin";
    *humidite_plante = 3;
    *luminosite_plante = 6;
    *temperature_plante = 4;
    floraison_plante[0] = 4;
    floraison_plante[1] = 5;
    floraison_plante[2] = 6;

    printf("Nom de la plante : %s\n\n", nom_plante);
    printf("Categorie :\n%s\n", categorie_plante);
    printf("Description de la plante :\n%s\n", description_plante);
    printf("Periode de floraison : %s\n\n", mois_floraison_plante);
}

int Fusain_d_Europe(int *humidite_plante, int *luminosite_plante, int *temperature_plante, int *floraison_plante)
{
    char nom_plante[] = "Fusain d’Europe";
    char categorie_plante[] = "Ordre :Celastrales\nFamille :Celastraceae\nGenre :Euonymus\n ";
    char description_plante[] = "-rameaux tétragones, verts feuilles moyennes, de 4-0 cm de long, elliptiques ou ovales-lancéolées \n ";
    char mois_floraison_plante[] = "avril – mai";
    *humidite_plante = 3;
    *luminosite_plante = 5;
    *temperature_plante = 4;
    floraison_plante[0] = 4;
    floraison_plante[1] = 5;

    printf("Nom de la plante : %s\n\n", nom_plante);
    printf("Categorie :\n%s\n", categorie_plante);
    printf("Description de la plante :\n%s\n", description_plante);
    printf("Periode de floraison : %s\n\n", mois_floraison_plante);
}

int Rosier_des_chiens(int *humidite_plante, int *luminosite_plante, int *temperature_plante, int *floraison_plante)
{
    char nom_plante[] = "Rosier des chiens";
    char categorie_plante[] = "Ordre :	Rosales\nFamille :Rosaceae\nGenre :	Rosa\n ";
    char description_plante[] = "-Arbrisseau de 1 à 3 mètres, généralement verdâtre et à rameaux robustes, dressés\n ";
    char mois_floraison_plante[] = "mai – juin";
    *humidite_plante = 3;
    *luminosite_plante = 6;
    *temperature_plante = 4;
    floraison_plante[0] = 5;
    floraison_plante[1] = 6;

    printf("Nom de la plante : %s\n\n", nom_plante);
    printf("Categorie :\n%s\n", categorie_plante);
    printf("Description de la plante :\n%s\n", description_plante);
    printf("Periode de floraison : %s\n\n", mois_floraison_plante);
}

int Rosier_pimprenelle(int *humidite_plante, int *luminosite_plante, int *temperature_plante, int *floraison_plante)
{
    char nom_plante[] = "Rosier pimprenelle";
    char categorie_plante[] = "Ordre :Rosales\nFamille :Rosaceae\nGenre :Rosa\n ";
    char description_plante[] = "-Arbrisseau peu élevé, souvent nain, à souche traçante, aiguillons nombreux, droits, inégaux, entremêlés d'acicules \n ";
    char mois_floraison_plante[] = "juin – juillet";
    *humidite_plante = 2;
    *luminosite_plante = 5;
    *temperature_plante = 5;
    floraison_plante[0] = 6;
    floraison_plante[1] = 7;

    printf("Nom de la plante : %s\n\n", nom_plante);
    printf("Categorie :\n%s\n", categorie_plante);
    printf("Description de la plante :\n%s\n", description_plante);
    printf("Periode de floraison : %s\n\n", mois_floraison_plante);
}

int Viorne_obier(int *humidite_plante, int *luminosite_plante, int *temperature_plante, int *floraison_plante)
{
    char nom_plante[] = "Viorne obier";
    char categorie_plante[] = "Ordre :Dipsacales\nFamille :Caprifoliaceae\nGenre :Viburnum\n ";
    char description_plante[] = "- Arbrisseau de 2-4 mètres, à rameaux fragiles, glabres, d'un gris blanchâtre\n ";
    char mois_floraison_plante[] = "mai – juin";
    *humidite_plante = 4;
    *luminosite_plante = 5;
    *temperature_plante = 4;
    floraison_plante[0] = 5;
    floraison_plante[1] = 6;

    printf("Nom de la plante : %s\n\n", nom_plante);
    printf("Categorie :\n%s\n", categorie_plante);
    printf("Description de la plante :\n%s\n", description_plante);
    printf("Periode de floraison : %s\n\n", mois_floraison_plante);
}

int Achillee_millefeuille(int *humidite_plante, int *luminosite_plante, int *temperature_plante, int *floraison_plante)
{
    char nom_plante[] = "Achillée millefeuille";
    char categorie_plante[] = "Ordre :Asterales\nFamille :Asteraceae\nGenre :Achillea\n ";
    char description_plante[] = "-Plante vivace à racine rampante tiges de 2-7 dm, dressées, pubescentes, parfois laineuses ainsi que les feuilles\n ";
    char mois_floraison_plante[] = "juin – septembre";
    *humidite_plante = 3;
    *luminosite_plante = 7;
    *temperature_plante = 4;
    floraison_plante[0] = 6;
    floraison_plante[1] = 7;
    floraison_plante[2] = 8;
    floraison_plante[3] = 9;

    printf("Nom de la plante : %s\n\n", nom_plante);
    printf("Categorie :\n%s\n", categorie_plante);
    printf("Description de la plante :\n%s\n", description_plante);
    printf("Periode de floraison : %s\n\n", mois_floraison_plante);
}

int Bugle_de_Geneve(int *humidite_plante, int *luminosite_plante, int *temperature_plante, int *floraison_plante)
{
    char nom_plante[] = "Bugle de Genève";
    char categorie_plante[] = "Ordre :Lamiales\nFamille :Lamiaceae\nGenre :	Ajuga\n ";
    char description_plante[] = "-Plante vivace de 10-40 cm, inodore, sans rejets rampants tiges dressées, simples, velues-laineuses tout autour, peu feuillées \n ";
    char mois_floraison_plante[] = "juin – septembre";
    *humidite_plante = 2;
    *luminosite_plante = 7;
    *temperature_plante = 4;
    floraison_plante[0] = 6;
    floraison_plante[1] = 7;
    floraison_plante[2] = 8;
    floraison_plante[3] = 9;

    printf("Nom de la plante : %s\n\n", nom_plante);
    printf("Categorie :\n%s\n", categorie_plante);
    printf("Description de la plante :\n%s\n", description_plante);
    printf("Periode de floraison : %s\n\n", mois_floraison_plante);
}

int Guimauve_officinale(int *humidite_plante, int *luminosite_plante, int *temperature_plante, int *floraison_plante)
{
    char nom_plante[] = "Guimauve officinale";
    char categorie_plante[] = "Ordre :Malvales\nFamille :Malvaceae\nGenre :	Althaea\n ";
    char description_plante[] = "-Plante vivace, toute veloutée-blanchâtre, à racine épaisse, blanche tiges d'environ 1 mètre, dressées, robustes\n ";
    char mois_floraison_plante[] = "juin – août";
    *humidite_plante = 4;
    *luminosite_plante = 6;
    *temperature_plante = 5;
    floraison_plante[0] = 6;
    floraison_plante[1] = 7;
    floraison_plante[2] = 8;

    printf("Nom de la plante : %s\n\n", nom_plante);
    printf("Categorie :\n%s\n", categorie_plante);
    printf("Description de la plante :\n%s\n", description_plante);
    printf("Periode de floraison : %s\n\n", mois_floraison_plante);
}

int Paquerette(int *humidite_plante, int *luminosite_plante, int *temperature_plante, int *floraison_plante)
{
    char nom_plante[] = "Pâquerette";
    char categorie_plante[] = "Ordre :Asterales\nFamille :Asteraceae\nGenre :Bellis\n ";
    char description_plante[] = "-à fibres très grêles tiges de 3-10 cm rarement plus, grêles\n ";
    char mois_floraison_plante[] = "janvier – décembre";
    *humidite_plante = 4;
    *luminosite_plante = 7;
    *temperature_plante = 8;
    floraison_plante[0] = 1;
    floraison_plante[1] = 2;
    floraison_plante[2] = 3;
    floraison_plante[3] = 4;
    floraison_plante[4] = 5;
    floraison_plante[5] = 6;
    floraison_plante[6] = 7;
    floraison_plante[7] = 8;
    floraison_plante[8] = 9;
    floraison_plante[9] = 10;
    floraison_plante[10] = 11;
    floraison_plante[11] = 12;

    printf("Nom de la plante : %s\n\n", nom_plante);
    printf("Categorie :\n%s\n", categorie_plante);
    printf("Description de la plante :\n%s\n", description_plante);
    printf("Periode de floraison : %s\n\n", mois_floraison_plante);
}
