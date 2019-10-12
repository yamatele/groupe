#ifndef SALLE
#define SALLE

#include"prof.h"

typedef struct Salle{
int nbre_prof;
Professeur *prof;

}Salle;


Professeur creer_prof();
void supprimer_prof(Professeur p[],Professeur* d,int t, Professeur tamp);

#endif
