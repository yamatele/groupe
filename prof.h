#ifndef  PROF
#define  PROF



typedef struct Professeur{

char nom[100];
char prenom[100];
int id;
int age;
char sitmat[100];
char spec[100];
int heure_contrat;
int nbre_h;
char module[100];
int dispo;
int paye;
int montant;



}Professeur;


Professeur* recherche(Professeur p[]);

void afficher(Professeur* p);

void modifierheure(Professeur* p);


#endif
