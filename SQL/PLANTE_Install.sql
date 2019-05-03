SPOOL PLANTE_Install.log
-- pas d'affichage des substitutions de variable
SET VERIFY OFF
-- affichage des requetes SQL
SET ECHO ON
-- connexion en tant que SYSTEM
CONNECT system/tellora

@ Table_Plante
@ Sequence_Plante
@ Insert_Plante
@ View_Plante
@ Select_Plante

spool off