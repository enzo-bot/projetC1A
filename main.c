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
#include <malloc.h>
#include "entetes.h"


#define TRUE 1
#define FALSE 0

void clearBuffer();

void main() {
    char *texteEntree = (char *) calloc(0,sizeof(char));
    if (texteEntree == NULL) exit(EXIT_FAILURE);
    char *texteChiffre = (char *) calloc(0,sizeof(char));
    if (texteChiffre == NULL) exit(EXIT_FAILURE);
    char *texteDechiffre = (char *) calloc(0,sizeof(char));
    if (texteDechiffre == NULL) exit(EXIT_FAILURE);
    
    int decalage;
    char *decalageEntree = (char *) calloc(0,sizeof(char));
    if (decalageEntree == NULL) exit(EXIT_FAILURE);

    char action;

    while (action != '0') {
        printf("Que voulez-vous faire ?\n1 : Chiffrer\n2 : Déchiffrer\n0 : Arrêter\n");
        action = getchar();
        clearBuffer();

        switch (action) {
            case '1' :
	            printf("Saisissez votre texte\n");
                scanf("%s", texteEntree);
                clearBuffer();

                if (verifierAlphaNumerique(texteEntree) == TRUE) {
                    printf("Quel décalage souhaitez-vous ? (entre 1 et 25)\n");
                    scanf("%s", decalageEntree);
                    sscanf(decalageEntree, "%d", &decalage);
                    printf("valeur du décalage : %d\n", decalage);

                    chiffrerCesar(texteEntree, decalage, texteChiffre);
                    printf("Message en entrée : %s\n", texteEntree);
                    printf("Message chiffré avec un décalage de %d : %s\n", decalage, texteChiffre);

                    clearBuffer();
                } else {
                    printf("Il y a des caractères spéciaux dans votre texte\n");
                    action = 0;
                }
                break;
            case '2' :
	            printf("Saisissez votre texte\n");
	            scanf("%s", texteEntree);
                clearBuffer();

                if (verifierAlphaNumerique(texteEntree) == TRUE) {
                    printf("Quel décalage souhaitez-vous ? (entre 1 et 25)\n");
                    scanf("%s", decalageEntree);
                    sscanf(decalageEntree, "%d", &decalage);
                    printf("valeur du décalage : %d\n", decalage);

                    dechiffrerCesar(texteEntree, decalage, texteDechiffre);
                    printf("Message déchiffré avec un décalage de %d : %s\n", decalage, texteDechiffre);

                    clearBuffer();
                } else {
                    printf("Il y a des caractères spéciaux dans votre texte\n");
                    action = 0;
                }
                break;
        }
    }
    
    free(texteEntree);
    free(texteChiffre);
    free(texteDechiffre);
    free(decalageEntree);

}

void clearBuffer() {
	char c = getchar();
	while (c != '\n') {
		c = getchar();
	}
}