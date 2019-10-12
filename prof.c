#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"prof.h"



void afficher(Professeur* p){

  printf("nom du prof: %s",p->nom);
  printf("prenom du prof: %s\n",p->prenom);
  printf("identifiant du prof: %d\n",p->id);
  printf("age du prof  : %d\n",p->age);
 printf("situation matrimoniale: ", p->sitmat);
 printf("matiere enseigne;%s",p->module);
 printf(" specialite: %s\n",p->spec );
 printf(" nombre heure remplies:%d\n",p->nbre_h);
 printf("heure du contrat: %d\n",p->heure_contrat );
 printf("disponibilite: %d",p->dispo);

p->paye = (p->nbre_h) * (p->montant);
printf("salaire en fonction du nombre d'heures : %d",p->paye);
  }



 void modifierheure(Professeur* p){
        int h;
     printf("entrer le nombre d'heures remplies par le prof \n ");
      scanf("%s",h);
      p->nbre_h = p->nbre_h + h;

      if(p->nbre_h== p->heure_contrat){
        p->dispo=0;
      }

}
