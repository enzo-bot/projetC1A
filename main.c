/******************************************************************************
*  ASR => M2101                                                               *
*******************************************************************************
*                                                                             *
*  N° de Sujet :  3                                                           *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Intitulé :    Chiffrement de messages                                      *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom-prénom1 : Martial Geslin                                               *
*                                                                             *
*  Nom-prénom2 : Enzo Slamnia                                                 *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom du fichier :  main.c                                                   *
*                                                                             *
******************************************************************************/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "entetes.h"


#define TRUE 1
#define FALSE 0

void main() {
    FILE* fic;
	int lgLigne;
	fic = fopen("table_ASCII.txt", "r");

	if (fic == NULL) {
		printf("Erreur à l'ouverture du fichier texte\n");
	} else {
		char ligne [216];
        char*pligne = NULL;
        size_t taille;
        int i = 0;
        lgLigne = getline(&pligne,&taille, fic);

        while (lgLigne != -1) {
			//printf("%s", pligne);
            ligne[i] = *pligne;
            printf("%c\n", ligne[i]);
            i++;
			lgLigne = getline(&pligne, &taille, fic);
		}

        
        fflush(stdout);
	    free(pligne);
	    fclose(fic);
    }






/////////////////////////////////////////////////////////////////

/*
    printf("test1\n");

    char c1 = 'Q';
    printf("Result when alphabet is passed: %d\n", isalpha(c1));

    char c2 = 'é';
    printf("Result when alphabet is passed: %d\n", isalpha(c2));
    printf("Result when isspace is passed: %d\n", isspace(c2));
    char c3 = ' ';
    printf("Result when alphabet is passed: %d\n", isalpha(c3));
    printf("Result when isspace is passed: %d\n", isspace(c3));

    printf("---------------------------------------------------\n");
    printf("test2\n");
    char c4 = 'e ';
    printf("Result when alphabet is passed: %d\n", isalpha(c4));
    printf("Result when isspace is passed: %d\n", isspace(c4));

    printf("---------------------------------------------------\n");
    printf("test3\n");
    if (isspace(c3)){printf("c3 est un espace\n");}
    if (isspace(c1)){printf("c1 est un espace\n");} else {printf("c1 n'est pas un espace\n");}
    if (isspace(c4)){printf("c4 est un espace\n");} else {printf("c4 n'est pas un espace\n");}
    
    printf("---------------------------------------------------\n");
    printf("test4\n");
    printf("%c\n",c2);
    printf("%d\n",c2);

    printf("%c\n",c1);
    printf("%d\n",c1);*/
    printf("---------------------------------------------------\n");
    printf("test5\n");
    char char1 = 'a';
    char char2 = '0';
    char char3 = '$';

    if (estAlphaNum(char1) == TRUE) {printf("C'est good bg\n");} else {printf("C'est pas good\n");}
    if (estAlphaNum(char2) == TRUE) {printf("C'est good bg\n");} else {printf("C'est pas good\n");}
    if (estAlphaNum(char3) == FALSE) {printf("C'est good bg\n");} else {printf("C'est pas good\n");}

    printf("---------------------------------------------------\n");
    printf("test6\n");
    char string1[] = "adzertj  sdvr";
    char string2[] = "0";
    char string3[] = "$grthfgd vs";


    if (verifierAlphaNumerique(string1) == TRUE) {printf("C'est good bg\n");} else {printf("C'est pas good\n");}
    if (verifierAlphaNumerique(string2) == TRUE) {printf("C'est good bg\n");} else {printf("C'est pas good\n");}
    if (verifierAlphaNumerique(string3) == FALSE) {printf("C'est good bg\n");} else {printf("C'est pas good\n");}

}