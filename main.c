#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"prof.h"

Salle s;
Professeur tamp;



int main (){

s.nbre_prof=0;

while(1){

      do{
        printf("quelle action voulez vous accomplir\n");
        printf("1-ajouter prof vacataire\n");
        printf("2-supprimer prof vacataire\n");
        printf("3-afficher un prof vacataire\n");
        printf("4-mettre a jour le nombre d'heures remplies par un professeur vacataire\n");
        printf("5-afficher les professeurs en fin de contrat\n");
        scanf("%d",&c);
      }while(c<0 || c>5);

      switch (c){

          case 1 :
          s.nbre_prof++;
          tamp =creer_prof(),
          


      }









}



  return 0;
}
