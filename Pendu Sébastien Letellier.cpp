#include <stdio.h>
#include<stdlib.h>
#include <time.h>
#include <ctype.h>
int main(void){

//Joueur 1

int gp;
int nblettre; /// saisis de la variable nblettre
int GG;
int erreur;
char c = 0; /// saisis du caractère c

	printf("bienvenue dans le jeu du pendu\n"); /// affichage de la saisis
	printf("\ncombien de lettre contient votre mot: ");/// affichage de la saisis
	scanf("%d", &nblettre);

int i;
char CB='n', mot1[nblettre];


for(i=0;i<nblettre;i++){
    printf("Saisissez vos lettres : ");
    getchar();
    scanf("%c",&c);
    mot1[i]=toupper(c);    /// pour mettre le mot en majuscul s'il est saisis en minuscule
}

	printf("\nVotre mot est : \n");
for(i = 0 ; i <nblettre ; i++){
    printf("%c", mot1[i]);          ///afficher le mot en parcourant le premier tableau
}

	printf("\nCe mot est il a votre gout:'O'ui, 'N'on: ");
	getchar();
	scanf("%c", &CB);
///joueur 2
while(CB == 'n' || CB == 'N'){ /// boucle pour dire si le joueur est d'accord ou non avec son mot


    for(i=0;i<nblettre;i++){/// boucle pour ressaissir les lettres
        printf("\nRessaisissez vos lettres : ");
        getchar();
        scanf("%c",&c);

}
        scanf("%c",&CB);
     }



char mot2[nblettre]; 
for (i = 1; i<nblettre - 1; i++){

        mot2[i] = '_';
}
    mot2[0] = mot1[0];                /// je veux que mon deuxieme tableaux ait la meme premiere lettre que mon premier
    mot2[nblettre - 1] = mot1[nblettre - 1];

int nbpendu;
    nbpendu = nblettre - 2; 
    printf("\nLa partie commence\n\nLe mot qu'il faut trouver est :");
for(i = 0; i<nblettre; i++){
    printf("%c", mot2[i]);
}

GG=0;
while(GG==0){     ///crée un boucle tant que le joueur 2 cherche le mot
		printf("\nrentrez une lettre\n");

		mot2[nblettre - 1] = mot1[nblettre - 1]; ///pour que le underscore change et met la lettre à la place


    getchar();
    scanf("%c",&nbpendu);
for(i = 0; i<nblettre; i++){    /// vérification de la lettre saisis


    if(nbpendu == mot1[i]){    /// teste la lettre saisie et affiche si la lettre est bonne
    	mot2[i] = nbpendu;
    	printf(" C'est bien vous avez trouver la bonne lettre continuez\n");
    	gp = gp+1;      ///rajouter le faite qu'une lettre a été trouver
    
}
 	if(i == nblettre-1 && nbpendu != nblettre){  ///teste la lettre saisie et affiche si c'est une erreur
 		erreur=erreur+1;

 	
 }
 
}
for(i=0; i<nblettre; i++){    /// afficher le mot avec tiret du bas et nouvelle lettre
    printf("%c",mot2[i]);


}
 if(gp == nblettre-2){     /// si toutes les lettres ont été trouver alors fin du programme
 	GG=1;
 }
 

}




if(gp == nblettre-2){
	printf("\nfelicitation vous avez trouver le mot");
}



return 0;
}
