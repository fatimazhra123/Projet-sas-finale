#include <stdio.h>
#include <stdlib.h>
# include<string.h>

struct gestion_bancaire{
  char nom[20];
  char prenom[90];
  char cin[100];
  float montant;
  
};
struct gestion_bancaire compt1 ;

   void affichier() {
       FILE *ab;
       ab= fopen("compt1.text","r");
       do{
           fscanf(ab,"%s;%s;%s;%f \n",&compt1.nom,&compt1.prenom,&compt1.cin,&compt1.montant);
           fflush(stdin);
    printf("*********** formation de compt1 bancaire\n*********"); 
    printf("le_nom_de_client:%s\n",compt1.nom);
    printf("le prenom_de_client:%s\n",compt1.prenom);
    printf("numero_de_cin: %s\n",compt1.cin);
    printf("le montant de client:%f",compt1.montant);
} while(!feof(ab));
 fclose(ab);
} 
 void ajouter(){
    FILE *ab;
    ab =fopen("compt1.text","a");
    
    printf("entrer le nom:");
    scanf("%s",&compt1.nom);
    fprintf(ab,"%s",compt1.nom);
    fflush(stdin);

    printf("entre le prenom:");
    scanf("%s",&compt1.prenom);
     fprintf(ab,"%s",compt1.prenom);
     fflush(stdin);

     printf("entre le numero de cin:");
    scanf("%s",&compt1.cin);
     fprintf(ab,"%s",compt1.cin);
     fflush(stdin);

     printf("entre le numero de montant:");
    scanf("%s",&compt1.montant);
     fprintf(ab,"%f",compt1.montant);
     fflush(stdin);
    fprintf(ab,"%s;%s;%s;%f\n",&compt1.nom,&compt1.prenom,&compt1.cin,&compt1.montant);
}
       

void afficher(){
  FILE* ab;
	ab=fopen("compt1.text","r");
	do{ 
	printf("*********** formation de compt1 bancaire\n*********");
	fscanf(ab,"%s",&compt1.nom);
    printf("entrer le nom:%s \n",compt1.nom);
	fflush(stdin);
	fscanf(ab,"%s",&compt1.prenom);
	printf("entrer le prenom:%s \n",compt1.prenom);
	fflush(stdin);
	fscanf(ab,"%s",&compt1.cin);
	printf("numero de cin:%s :\n",compt1.cin);
	fflush(stdin);
	fscanf(ab,"%s",&compt1.montant);
	printf("entrer le montant:%s \n",compt1.montant);
	fflush(stdin);
	fscanf(ab,"%s;%s;%s:%f \n",&compt1.nom,&compt1.prenom,&compt1.cin,&compt1.montant);

}while(!feof(ab));
fclose(ab);
}


void retrait(float solde){
FILE *ab;
    ab=fopen("compt1.text","r");
    system("cls");
printf("\n***********le montant apres le retrait*********\n");
    do{
   
fscanf(ab,"%s",&compt1.nom);
fscanf(ab,"%s",&compt1.prenom);
fscanf(ab,"%s",&compt1.cin);
    fscanf(ab,"%f",&compt1.montant);
printf("entrer le montant:%f Dh\n",compt1.montant-solde);
    fflush(stdin);
} while(!feof(ab));
fclose(ab);
    }
      void DEPOT(float solde){
          FILE *ab;
    ab=fopen("compt1.text","r");
    system("cls");
printf("\n------------le montant apres le DEPOT-------\n");
    do{
   
fscanf(ab,"%s",&compt1.nom);
fscanf(ab,"%s",&compt1.prenom);
fscanf(ab,"%s",&compt1.cin);
    fscanf(ab,"%f",&compt1.montant);
printf("montant apres le DEPOT:%f Dh\n",compt1.montant+solde);
    fflush(stdin);
} while(!feof(ab));
fclose(ab);
}

		      
const char* rech(char compte1){
FILE*ab;
ab=fopen("compt1.txt","a");
do {
fscanf(ab,"%s;%s;%s;%f",&comp1.CIN,&comp1.nom,&comp1.prenom,&comp1.montant);

fflush(stdin);
 if (comp1.CIN==compt1){
fclose(ab);
return 1;
}
}while (!feof(ab));
fclose(ab);
return -1;
}
void rechercher(){
  char cin[100];
   FILE * ab;
   ab= fopen ("compt1.txt", "w");
 
    printf("veuillez cin de recherche :");
  scanf("%s",cin);
  fscanf(ab, "%s %s %s %f",comp1.CIN, comp1.nom, comp1.prenom,comp1.montant);
   if (strcmp(comp1.CIN,cin) == 0){
   rewind(ab);
   
   
   printf("numero_de_cin:%s\n", comp1.CIN );
   printf(" client : %s\n", comp1.nom );
   printf("Prenom : %s\n", comp1.prenom );
   printf("Solde : %fdh\n",comp1.montant );
   fclose(ab);
   {
   

/*
printf("\n ----Le menu principal------ \n");
printf("\n1.*********** formation de compt1 bancaire*********\n");
printf("\n2. Introduire plusieurs comptes bancaires ");
printf"\n3***********le montant apres le retrait*********\n"();
printf("\n------------le montant apres le DEPOT-------\n");
printf("\n..Quitte");

printf("\n       entre votre choix : ");
scanf("%d",&choix);
do{
switch(choix){
case 1:
ajoutecompt1();
break;
case 2:
afficher();
break;
case 3:
retrait();
break;
case 4:
DEPOT();
break;
case 5:
break;
}



 return 0;
}
*/

int main(){

 
ajouter();
    return 0;
	}


