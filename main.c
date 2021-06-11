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


void main() {
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
    printf("%d\n",c1);
    printf("---------------------------------------------------\n");
    printf("test5\n");
    char texte1 = "fezqfdvs d";
    char texte2 = "fezqfdvsd  à";

    if (verifierAlphaNumerique(texte1,texte1)){printf("oui");}else{printf("non");}
    if (verifierAlphaNumerique(texte2,texte2)){printf("oui");}else{printf("non");}
}