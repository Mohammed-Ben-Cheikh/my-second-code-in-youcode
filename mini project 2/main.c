#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 typedef struct  {
    char nom[100];
    char nt[100];
    char am[100];
}contact;

      contact carnet[100];
      int c=0,choi , i;
      char modifier_nom[50];
      char modifier_nt[50];
      char modifier_am[50];

    void ajouter(){
          if (c<100){
            printf("       =====>>  Entre le Nom de Contact ---------------- : ");
            scanf("%s",carnet[c].nom);
            printf("\n");
            printf("       =====>>  Entre le Nemuro de telephon de Contact - : ");
            scanf("%s",carnet[c].nt);
            printf("\n");
            printf("       =====>>  Entre le Mail de Contact --------------- : ");
            scanf("%s",carnet[c].am);
            c++;
                    }else ("       =====>> Carnet Est Trouve !!!");
                 }

    void afficher(){
        if (c>0){
        for ( i = 0; i<c;i++){
            printf("\n\n");
            printf("=====>> Contact numero %d : \n\n          Le nom du contact est                : %s" ,i+1,carnet[i].nom );
            printf("\n\n");
            printf("          Le nemuro de telephon de Contact est : %s",carnet[i].nt );
            printf("\n\n");
            printf("          Le mail de Contact est               : %s",carnet[i].am );
            printf("\n\n");
                             }
                 }else printf("       =====>> Aucune contact enregistrer !!!");

                   }


    void supprimer(char nom[]){
       int a=-1;
       for(int i = 0 ; i<c;i++) {
        if(strcmp(nom,carnet[i].nom)==0)
        {
            a=i;
            break;
        }
                                }
        if(a!=-1){
            for(int i=a;i<c-1;i++) {
                carnet[i]= carnet[i+1];
                                   }
            c--;
                 }
        else printf("       =====>> Contact Non Trouve !!!\n");
                              }

    void rechercher(char nom[]){

       for( i = 0 ; i<c;i++){
        if(strcmp(nom,carnet[i].nom)==0){
            printf("                   =====>> Le nom de contact est                : %s \n",carnet[i].nom);
            printf("\n");
            printf("                   =====>> Le Nemuro de telephon de contact est : %s \n",carnet[i].nt);
            printf("\n");
            printf("                   =====>> Entre le mail de Contact est         : %s \n",carnet[i].am);
            break;
                                        }
        else printf("       =====>> Contact Non Trouve !!!\n");
                            }
                               }

    void modifier(){
        if (c>0){
           printf("       =====>> Entre Le Nom De Contact : ");
           scanf("%s",modifier_nom);
           printf("\n\n");
           for(int i=0 ;i<c;i++){
        if(strcmp(carnet[i].nom,modifier_nom)==0){
         printf("       =====>>  Entrer le nouveu nom du contact                 : ");
         scanf("%s",modifier_nom);
         printf("\n");
         printf("       =====>>  Entrer le nouveu numero de telephone de contact : ");
         scanf("%s",modifier_nt);
         printf("\n");
         printf("       =====>>  Entrer le nouveu amil du contact                : ");
         scanf("%s",modifier_am);
         strcpy(carnet[i].nom,modifier_nom);
         strcpy(carnet[i].nt,modifier_nt);
         strcpy(carnet[i].am,modifier_am);
         printf("\n");
         printf("                 =====>> Modification enregistrer !!!");
                                                 }
                            else printf("               =====>> Contact Non Trouve !!!\n\n");
                                }
                 }
          else printf("       =====>> Aucune contact enregistrer !!!");

                   }




int main ()
{
    char nom [50];
    int choix =0;
    do
    {
        printf("\n\n");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
printf("\n");printf("\n");
printf("     ----------------- Systeme de Gestion de Contacts -----------------");
printf("\n");printf("\n");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
printf("|\n");printf("       |\n");printf("       |\n");

printf("       |===>> Pour Ajouter un Contact entre -------------------------- : 1\n       |\n");
printf("       |===>> Pour Afficher tous les Contacts disponibles entre ------ : 2\n       |\n");
printf("       |===>> Pour Rechercher un Contact par son titre entre ----------: 3\n       |\n");
printf("       |===>> Pour Mettre a jour les donne d'un Contact entre -------- : 4\n       |\n");
printf("       |===>> Pour Supprimer un Contact du stock entre --------------- : 5\n        \n");
printf("\n\n");
printf("                 ===>> entre votre numero ici : ");
scanf("%d",&choi);
printf("\n\n");



        switch (choi)
        {
        case 1:
           ajouter();
            break;
        case 2:
            afficher();
            break;
        case 3:
            if (c>0){
            printf("       =====>> Donner le nom de contact a chercher : ");
            scanf("%s",nom);
            printf("\n\n");
            rechercher(nom);
            }else printf("       =====>> Aucune contact enregistrer !!!");
            break;
        case 4:
            modifier();
            break;

        case 5:
            if (c>0){
            printf("       =====>> Donner le nom de contact a supprimer : ");
            scanf("%s",nom);
            supprimer(nom);
            printf("\n\n");
            printf("                 =====>> le contact est bien supprimer !!!");
            }else printf("       =====>> Aucune contact enregistrer !!!");
            break;
            default:

            printf("       =====>> Entre un valeur entre <1> et <5> !!! \n");
             break;
        }

    }while(choi =! 0);

   return 0;
}

