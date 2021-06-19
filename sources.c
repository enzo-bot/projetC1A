#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <iconv.h>

#define TRUE 1
#define FALSE 0

int estAlphaNum(int charac) {
	static char const alphanum[] ="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzÀÁÂÃÄÇÈÉÊËÌÍÎÏÑÒÓÔÕÖÙÚÛÜàáâãäçèéêëìíîïñòóôõöùúûüýÿ ";
	for (int i = 0; i < sizeof alphanum; i++) {
		if (charac == alphanum[i]) {
			return TRUE;
		}
	}
	return FALSE;
}

int verifierAlphaNumerique(char *texte) {

	
	for (int i = 0 ; *(texte + i) != '\0'; i++)
	{
		if (!estAlphaNum(*(texte + i))){
			return FALSE;
		}
	}
	return TRUE;
}

char* chiffrerCesar(char *texte, int decalage, char *texteChiffre) {
	int place;
	for (int i = 0 ; *(texte + i) != '\0'; i++) {
		if (texte[i] >= 'a' && texte[i] <= 'z') {
			place = texte[i] - 'a';
			place = (place+decalage) % 26;
			if (place < 0 ) place += 26;

			texteChiffre[i] = 'a' + place;
		} else if (texte[i] >= 'A' && texte[i] <= 'Z') {
			place = texte[i] - 'A';
			place = (place+decalage) % 26;
			if (place < 0 ) place += 26;

			texteChiffre[i] = 'A' + place;
		} else {
			texteChiffre[i] = texte[i];
		}
	}


	char* dechiffrerCesar(char *texteChiffre, int decalage, char *texteDechiffre){
		int place;
		
		for (int i = 0 ; *(texte + i) != '\0'; i++) {
			if (texte[i] >= 'a' && texte[i] <= 'z') {
				place = texte[i] - 'a';
				place = (place-decalage) % 26;
				if (place < 0 ) place += 26;

				texteChiffre[i] = 'a' + place;
			} else if (texte[i] >= 'A' && texte[i] <= 'Z') {
				place = texte[i] - 'A';
				place = (place-decalage) % 26;
				if (place < 0 ) place += 26;

				texteChiffre[i] = 'A' + place;
			} else {
				texteChiffre[i] = texte[i];
			}
		}


	}

}
