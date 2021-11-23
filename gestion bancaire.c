#include <stdio.h>
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
printf("le montant de client:%f");
}while(!feof(ab));
fclose(ab);
} 
 void ajouter(){
    FILE* ab;
    ab =fopen("compt.text","a");
    
    printf("entre le nom:");
    scanf("%s",&compt1.nom);
    fprintf(ab,"%S",compt1.nom);
fflush(stdin);

    printf("entre le prenom:");
    scanf("%s",&compt1.prenom);
     fprintf(ab,"%S",compt1.prenom);
     fflush(stdin);

     printf("entre le numero de cin:");
    scanf("%s",&compt1.cin);
     fprintf(ab,"%S",compt1.cin);
     fflush(stdin);

     printf("entre le numero de montant:");
    scanf("%s",&compt1.montant);
     fprintf(ab,"%f",compt1.montant);
     fflush(stdin);

}
       

int main(){

ajouter();
    return 0;
}
void afficher(){
  FILE* ab;
	ab=fopen("compt.text","r");
	do{ 
	printf("*********** formation de compt1 bancaire\n*********");
	
	scanf(ab,"%s",&compt1.nom);
	printf("entrer le nom:%s\n");
	fflush(stdin);
	scanf(ab,"%s",&compt1.prenom);
	printf("entrer le prenom:%s\n");
	fflush(stdin);
	scanf(ab,"%s",&compt1.cin);
	printf("numero de cin:%s\n");
	fflush(stdin);
    scanf(ab,"%s",&compt1.montant);
	printf("entrer le montant:%s\n");
	fflush(stdin);
}while(!feof(ab));
fclose(ab);
}

void retrait(float solde){
	 FILE* ab;
    ab=fopen("compt.text","r");
    do{
    	printf("*********** formation de compt1 bancaire\n*********");
	
	scanf(ab,"%s",&compt1.nom);
	printf("entrer le nom:%s\n");
	fflush(stdin);
	scanf(ab,"%s",&compt1.prenom);
	printf("entrer le prenom:%s\n");
	fflush(stdin);
	scanf(ab,"%s",&compt1.cin);
	printf("numero de cin:%s\n");
	fflush(stdin);
    scanf(ab,"%s",&compt1.montant);
	printf("entrer le montant:%f\n",compt1.montant-solde);
	
	fflush(stdin);
	} while(!feof(ab));
	fclose(ab);
}
	


