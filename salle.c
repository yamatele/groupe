
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"salle.h"

Professeur creer_prof(){
  Professeur p;
  printf("nom du prof:\n");
  scanf("%s",p.nom);
  printf("prenom du prof:\n");
  scanf("%s",p.prenom);
  printf("identifiant du prof: \n");
  scanf("%s",p.id);
  printf("age du prof  : \n");
  scanf("%s",p.age);
 printf("situation matrimoniale:" );
 scanf("%s",p.sitmat);
 printf("matiere enseigne;");
 scanf("%s",p.module);
 printf(" specialite:\n");
 scanf("%s",p.spec);
 printf(" nombre heure remplies:\n");
 scanf("%s",p.nbre_h);
 printf("nombres d'heures attribuée: \n");
 scanf("%s",p.heure_contrat);
 p.montant=3000;

 return p;
}


void supprimer_prof(Professeur p[],Professeur* d, int t,Professeur tamp){

  tamp= *(p+t);
  *(p+t)= *d;
  *d=tamp;

  p = (Professeur*) realloc(p, t-1 * sizeof(Professeur));






}
