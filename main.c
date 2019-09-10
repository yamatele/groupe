 #include<stdio.h>
 #include<stdlib.h>

void changeValue(int *entier){
 
 	  *entier=*entier+1;

 
}

int main()
{
	
int a;
a=2;

   changeValue(&a);
    
    printf("a=%d\n",a);


     /*printf("la valeur de a est :%d\n",a);
     printf("l'adresse de a est : %d\n",&a);

     	//declaration d'un pointeur
         int *p;
         p=&a;
         printf("affichons le pointeur: %d\n",p);
        printf("la valeur de a :%d\n",*p);

*/
	return 0;
}
