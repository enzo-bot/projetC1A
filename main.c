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
#include "entetes.h"


#define TRUE 1
#define FALSE 0

void getText(char tabChar[], int size);
void clearBuffer();

void main() {
    char *texteEntree = (char *) calloc(0,sizeof(char));
    if (texteEntree == NULL) exit(EXIT_FAILURE);
	char *texteChiffre = (char *) calloc(0,sizeof(char));
    if (texteChiffre == NULL) exit(EXIT_FAILURE);
    char *texteDechiffre = (char *) calloc(0,sizeof(char));
    if (texteDechiffre == NULL) exit(EXIT_FAILURE);
    int decalage;
    char decalageEntree[2];
    
    size_t taille = 0;
	int nbCharlu = 0;
	printf("Saisissez votre texte\n");
	nbCharlu = getline(&texteEntree, &taille, stdin);

    printf("Quel décalage souhaitez-vous ? (entre 1 et 25) (format : XX)\n");
    getText(decalageEntree, 2);
    sscanf(decalageEntree, "%d", &decalage);
    printf("valeur du décalage : %d\n", decalage);

    chiffrerCesar(texteEntree, decalage, texteChiffre);
    printf("Message en entrée : %s\n", texteEntree);
    printf("Message chiffré avec un décalage de %d : %s\n", decalage, texteChiffre);

    dechiffrerCesar(texteChiffre, decalage, texteDechiffre);
    printf("Message déchiffré avec un décalage de %d : %s\n", decalage, texteDechiffre);

    free(texteEntree);
    free(texteChiffre);
    free(texteDechiffre);

}

void clearBuffer() {
	char c = getchar();
	while (c != '\n') {
		c = getchar();
	}
}

void getText(char tabChar[], int size) {
	int i = 0;
	while (i<size) {
		tabChar[i] = getchar();
		i++;
	}
	clearBuffer();
}