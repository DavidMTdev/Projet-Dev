drop table UTILISATEUR;
drop table CHOISIR;
drop table PLANTE;
drop table POSSEDER;
drop table CARACTERISTIQUE;

create table UTILISATEUR
(
    ID_UTILISATEUR int
    AUTO_INCREMENT not null,
    NOM_UTILISATEUR varchar
    (30) not null,
    PRENOM_UTILISATEUR varchar
    (20) null,
    primary key
    (ID_UTILISATEUR)
);

    create table CARACTERISTIQUE
    (
        ID_CARACTERISTIQUE int
        AUTO_INCREMENT not null,
  HUMIDITE int not null,
  TEMPERATURE int not null,
  LUMINOSITE int not null,
  MOIS_FLORAISON varchar
        (120) not null,
  primary key
        (ID_CARACTERISTIQUE)
);

        create table PLANTE
        (
            ID_PLANTE int
            AUTO_INCREMENT not null,
  NOM_PLANTE varchar
            (150) not null,
  DESCRIPTION_PLANTE varchar
            (200) null,
  FAMILLE_PLANTE varchar
            (150) not null,
  primary key
            (ID_PLANTE)
);

            create table CHOISIR
            (
                ID_PLANTE int not null,
                ID_UTILISATEUR int not null,
                primary key(ID_PLANTE, ID_UTILISATEUR),
                foreign key (ID_PLANTE) references PLANTE(ID_PLANTE),
                foreign key (ID_UTILISATEUR) references UTILISATEUR(ID_UTILISATEUR)
            );

            create table POSSEDER
            (
                ID_PLANTE int not null,
                ID_CARACTERISTIQUE int not null,
                primary key
                (ID_PLANTE, ID_CARACTERISTIQUE),
                foreign key
                (ID_PLANTE) references PLANTE
                (ID_PLANTE),
                foreign key
                (ID_CARACTERISTIQUE) references CARACTERISTIQUE
                (ID_CARACTERISTIQUE)
            );

            insert into utilisateur
            values(NULL, 'DA SILVA TEIXEIRA', 'David');
            insert into utilisateur
            values(NULL, 'RICHARD', 'Jeremy');
            insert into utilisateur
            values(NULL, 'Peyre', 'Leo');

            commit;

            insert into plante
            values(NULL, 'Butome en ombelle', 'Plante vivace de 50 cm à 1 mètre, glabre, à souchehorizontale charnue', 'Butomaceae');
            insert into plante
            values(NULL, 'Muguet', 'Plante vivace de 30-60 cm, glabre, à souche horizontale épaisse très fibreuse', 'Asparagaceae');
            insert into plante
            values(NULL, 'Digitale pourpre', 'Plante bisannuelle ou vivace de 50 cm à 1 m. 50, tomenteuse-blanchâtre, à tige robuste, creuse, lâchement feuillée', 'Plantaginaceae');
            insert into plante
            values(NULL, 'Aspérule odorante', 'Plante vivace de 10-30 cm, glabre, noirâtre et odorante après la dessiccation, à souche grêle, longuement traçante', 'Rubiaceae');
            insert into plante
            values(NULL, 'Lierre terrestre', 'Plante vivace, mollement poilue, couchée-radicante, à tiges florifères redressées, simples, longues de 5-25 cm', 'Lamiaceae');
            insert into plante
            values(NULL, 'Cannabis', 'Plante annuelle de 1-2 mètres, pubescente-rude, à odeur forte', 'Cannabaceae');
            insert into plante
            values(NULL, 'Houblon', 'Plante vivace de 2-5 mètres, rude, à tiges herbacées, sarmenteuses-volubiles, rameuses', 'Cannabaceae');
            insert into plante
            values(NULL, 'Hysope', 'Plante vivace de 20-50 cm, glabre ou glabrescente, verte, aromatique', 'Lamiaceae');
            insert into plante
            values(NULL, 'Iris fétide', 'Plante vivace de 30-80 cm, glabre, fétide par le froissement, à rhizome épais', 'Iridaceae');
            insert into plante
            values(NULL, 'Iris faux acore', 'Plante vivace de 40 cm à 1 mètre, glabre, inodore, à rhizome épais', 'Iridaceae');
            insert into plante
            values(NULL, 'Knautie des champs', 'Plante vivace de 20-80 cm, velue, à souche épaisse et oblique', 'Caprifoliaceae');
            insert into plante
            values(NULL, 'Gesse des bois', 'Plante vivace de 1 à 2 mètres, glabre', 'Gesse des bois');
            insert into plante
            values(NULL, 'Salicaire commune', 'Plante vivace de 50 cm, à 1 mètre, dressée, robuste, pubescente dans le haut, à souche épaisse', 'Lythraceae');
            insert into plante
            values(NULL, 'Menthe pouliot', 'Plante vivace de 10-50 cm, velue-grisâtre ou glabrescente, à odeur très forte', 'Lamiaceae');
            insert into plante
            values(NULL, 'Origan commun', 'Plante vivace de 30-80 cm, poilue, souvent rougeâtre, aromatique', 'Lamiaceae');
            insert into plante
            values(NULL, 'Anémone pulsatille', 'Fleur médicinale vivace', 'Anémone pulsatille');
            insert into plante
            values(NULL, 'Sauge des prés', 'Plante vivace de 35-80 cm, velue, simple ou peu rameuse, odorante', 'Lamiaceae');
            insert into plante
            values(NULL, 'Scabieuse blanchâtre', 'Plante vivace de 20-40 cm, glabrescente, à tiges peu rameuses, feuillées', 'Caprifoliaceae');
            insert into plante
            values(NULL, 'Silène penché', 'Plante vivace, velue, à souche presque ligneuse tiges de 20-50 cm, simples ou peu rameuses, visqueuses dans le haut, peu feuillées', 'Caryophyllaceae');
            insert into plante
            values(NULL, 'Épiaire des bois', 'Ortie puante. Plante vivace de 30 cm à 1 mètre, très velue, verte, à souche rampante, à odeur fétide', 'Épiaire des bois');
            insert into plante
            values(NULL, 'Petite pervenche', 'Plante vivace, glabre, couchée-diffuse, à tiges persistantes, radicantes, longues de 1-2 mètres', 'Apocynaceae');
            insert into plante
            values(NULL, 'Violette des chiens', 'Tiges de 5-40 cm, herbacées, dressées ou ascendantes, naissant de la souche', 'Violaceae');
            insert into plante
            values(NULL, 'Fusain d’Europe', 'Rameaux tétragones, verts feuilles moyennes, de 4-0 cm de long, elliptiques ou ovales-lancéolées', 'Celastraceae');
            insert into plante
            values(NULL, 'Rosier des chiens', 'Arbrisseau de 1 à 3 mètres, généralement verdâtre et à rameaux robustes, dressés', 'Rosaceae');
            insert into plante
            values(NULL, 'Rosier pimprenelle', 'Arbrisseau peu élevé, souvent nain, à souche traçante, aiguillons nombreux, droits, inégaux, entremêlés d acicules', 'Rosaceae');
            insert into plante
            values(NULL, 'Viorne obier', 'Arbrisseau de 2-4 mètres, à rameaux fragiles, glabres, d un gris blanchâtre, Viorne obier', 'Viorne obier');
            insert into plante
            values(NULL, 'Achillée millefeuille', 'Plante vivace à racine rampante tiges de 2-7 dm, dressées, pubescentes, parfois laineuses ainsi que les feuilles', 'Asteraceae');
            insert into plante
            values(NULL, 'Bugle de Genève', 'Plante vivace de 10-40 cm, inodore, sans rejets rampants tiges dressées, simples, velues-laineuses tout autour, peu feuillées', 'Lamiaceae');
            insert into plante
            values(NULL, 'Guimauve officinale', 'Plante vivace, toute veloutée-blanchâtre, à racine épaisse, blanche tiges d environ 1 mètre, dressées, robustes, Malvaceae', 'Malvaceae');
            insert into plante
            values(NULL, 'Pâquerette', 'Plante à fibres, très grêles tiges, mesure 3-10 cm rarement plus, grêles', 'Asteraceae');

            commit;

            insert into caracteristique
            values(NULL, 7, 4, 7, 'Juin – Août');
            insert into caracteristique
            values(NULL, 2, 2, 6, 'Mai -Juillet');
            insert into caracteristique
            values(NULL, 3, 5, 5, 'Mai -Septembre');
            insert into caracteristique
            values(NULL, 3, 4, 2, 'Mai – Juin');
            insert into caracteristique
            values(NULL, 4, 4, 4, 'Mars – Mai');
            insert into caracteristique
            values(NULL, 3, 5, 7, 'Juin-Septembre');
            insert into caracteristique
            values(NULL, 2, 2, 7, 'Juin – Septembre');
            insert into caracteristique
            values(NULL, 2, 6, 4, 'Juillet -Août');
            insert into caracteristique
            values(NULL, 6, 4, 6, 'Mai – Juillet');
            insert into caracteristique
            values(NULL, 2, 4, 6, 'Avril – Juillet');
            insert into caracteristique
            values(NULL, 3, 5, 5, 'Juin – Août');
            insert into caracteristique
            values(NULL, 4, 4, 6, 'Juin – Août');
            insert into caracteristique
            values(NULL, 5, 6, 7, 'Juin – Septembre');
            insert into caracteristique
            values(NULL, 3, 4, 5, 'Juillet – Octobre');
            insert into caracteristique
            values(NULL, 1, 5, 7, 'Juillet – Septembre');
            insert into caracteristique
            values(NULL, 2, 6, 7, 'Avril – Juin');
            insert into caracteristique
            values(NULL, 2, 5, 7, 'Mai – Juillet');
            insert into caracteristique
            values(NULL, 3, 5, 5, 'Juillet – Septembre');
            insert into caracteristique
            values(NULL, 4, 4, 3, 'Mai – Juillet');
            insert into caracteristique
            values(NULL, 3, 5, 2, 'Juin – Septembre');
            insert into caracteristique
            values(NULL, 3, 5, 2, 'Février-Mai');
            insert into caracteristique
            values(NULL, 3, 4, 6, 'Avril – Juin');
            insert into caracteristique
            values(NULL, 3, 4, 5, 'Avril – Mai');
            insert into caracteristique
            values(NULL, 3, 4, 6, 'Mai – Juin');
            insert into caracteristique
            values(NULL, 2, 5, 5, 'Juin – Juillet');
            insert into caracteristique
            values(NULL, 4, 4, 5, 'Mai – Juin');
            insert into caracteristique
            values(NULL, 3, 4, 7, 'Juin – Septembre');
            insert into caracteristique
            values(NULL, 2, 4, 7, 'Juin – Septembre');
            insert into caracteristique
            values(NULL, 4, 5, 6, 'Juin – Août');
            insert into caracteristique
            values(NULL, 4, 8, 7, 'Janvier – Décembre');

            commit;

            insert into posseder
            values(1, 1);
            insert into posseder
            values(2, 2);
            insert into posseder
            values(3, 3);
            insert into posseder
            values(4, 4);
            insert into posseder
            values(5, 5);
            insert into posseder
            values(6, 6);
            insert into posseder
            values(7, 7);
            insert into posseder
            values(8, 8);
            insert into posseder
            values(9, 9);
            insert into posseder
            values(10, 10);
            insert into posseder
            values(11, 11);
            insert into posseder
            values(12, 12);
            insert into posseder
            values(13, 13);
            insert into posseder
            values(14, 14);
            insert into posseder
            values(15, 15);
            insert into posseder
            values(16, 16);
            insert into posseder
            values(17, 17);
            insert into posseder
            values(18, 18);
            insert into posseder
            values(19, 19);
            insert into posseder
            values(20, 20);
            insert into posseder
            values(21, 21);
            insert into posseder
            values(22, 22);
            insert into posseder
            values(23, 23);
            insert into posseder
            values(24, 24);
            insert into posseder
            values(25, 25);
            insert into posseder
            values(26, 26);
            insert into posseder
            values(27, 27);
            insert into posseder
            values(28, 28);
            insert into posseder
            values(29, 29);
            insert into posseder
            values(30, 30);

            commit;