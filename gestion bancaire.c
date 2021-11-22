#include <stdio.h>
# include<string.h>

struct gestion bancaire{
  char nom[20];
  char prenom[90];
  char cin[100];
  float montant
  
};
struct gestion bancaire compte1 ;

  /* void affichier() {
       FILE *ab;
       ab= fopen("compte1.text","r");
       do
       {
           scanf(ab,"%s;%s;%s;%f \n",&compt1.nom,&compte1.prenom,&compte1.cin,&compte1.montant);
           fflush(stdin);
  printf("*********** formation de compte1 bancaire\n*********"); 
printf("le nom de client:%s\n",compte1.nom);
printf("le prenom de client:%s\n",compte1.prenom);
printf("numero de cin:%s\n",compte1.cin);
printf("le montant de client:%f");
}while(feof(ab));
fclose(ab);
} */
 void ajouter(){
    FILE* ab;
    ab =fopen("compte.text","a");
    
    printf("entre le nom:");
    scanf("%s",&compte1.nom);
    fprintf(ab,"%S",compte1.nom);
fflush(stdin);

    printf("entre le prenom:");
    scanf("%s",&compte1.prenom);
     fprintf(ab,"%S",compte1.prenom);
     fflush(stdin);

     printf("entre le numero de cin:");
    scanf("%s",&compte1.cin);
     fprintf(ab,"%S",compte1.cin);
     fflush(stdin);

     printf("entre le numero de montant:");
    scanf("%s",&compte1.montant);
     fprintf(ab,"%f",compte1.montant);
     fflush(stdin);

}
       

int main(){

ajouter();
    return 0;
}
