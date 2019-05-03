drop view liste_plante_utilisateur; 

create view liste_plante_utilisateur as 
select nom_plante as "Nom de la Plante", nom_utilisateur as "Nom", prenom_utilisateur as "Prenom"
from plante p
join choisir c on c.id_plante = p.id_plante
join utilisateur u on c.id_utilisateur = u.id_utilisateur
;

drop view liste_plante; 

create view liste_plante as 
select nom_plante as "Nom de la Plante", famille_plante as "Famille", description_plante as "Description", humidite, temperature, luminosite, mois_floraison as "Floraision"
from plante pl
join posseder po on po.id_plante = pl.id_plante
join caracteristique c on po.id_caracteristique = c.id_caracteristique
;

drop view liste_utilisateur; 

create view liste_utilisateur as 
select nom_utilisateur as "Nom", prenom_utilisateur as "Prenom"
from utilisateur
;