drop table UTILISATEUR cascade constraint;
drop table CHOISIR cascade constraint;
drop table PLANTE cascade constraint;
drop table POSSEDER cascade constraint;
drop table CARACTERISTIQUE cascade constraint;

create table UTILISATEUR (
  ID_UTILISATEUR integer not null,
  NOM_UTILISATEUR varchar2(30) not null,
  PRENOM_UTILISATEUR varchar2(20) null,
  constraint pk_utilisateur primary key(ID_UTILISATEUR)
);

create table PLANTE (
  ID_PLANTE integer not null,
  NOM_PLANTE varchar2(150) not null,
  DESCRIPTION_PLANTE varchar2(200) null,
  FAMILLE_PLANTE varchar2(150) not null,
  constraint pk_plante primary key(ID_PLANTE)
);

create table CARACTERISTIQUE(
  ID_CARACTERISTIQUE integer not null,
  HUMIDITE integer not null,
  TEMPERATURE integer not null,
  LUMINOSITE integer not null,
  MOIS_FLORAISON varchar2(120) not null,
  constraint pk_caracteristique primary key(ID_CARACTERISTIQUE)
);

create table CHOISIR(
  ID_PLANTE integer not null,
  ID_UTILISATEUR integer null,
  constraint pk_choisir primary key(ID_PLANTE, ID_UTILISATEUR), 
  constraint fk_choisir foreign key(ID_PLANTE) 
  references PLANTE(ID_PLANTE), 
  constraint fk_choisirbis foreign key(ID_UTILISATEUR)
  references UTILISATEUR(ID_UTILISATEUR)
);

create table POSSEDER(
  ID_PLANTE integer not null,
  ID_CARACTERISTIQUE integer not null,
  constraint pk_posseder primary key(ID_PLANTE, ID_CARACTERISTIQUE), 
  constraint fk_posseder foreign key(ID_PLANTE) 
  references PLANTE(ID_PLANTE),
  constraint fk_possederbis foreign key(ID_CARACTERISTIQUE)
  references CARACTERISTIQUE(ID_CARACTERISTIQUE)
);
