#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

	void chiffrerCesar(char *texte, int decalage, char *texteChiffre) {
	int place;
	printf("test1\n");
	for (int i = 0 ; *(texte + i) != '\0'; i++) {
		if (texte[i] >= 'a' && texte[i] <= 'z') {
			printf("test2\n");
			place = texte[i] - 'a';
			printf("test3\n");
			place = (place+decalage) % 26;
			printf("test4\n");
			if (place < 0 ) place += 26;
			printf("test5\n");
			texteChiffre[i] = 'a' + place;
			printf("test6\n");
		} else if (texte[i] >= 'A' && texte[i] <= 'Z') {
			printf("test7\n");
			place = texte[i] - 'A';
			printf("test8\n");
			place = (place+decalage) % 26;
			printf("test9\n");
			if (place < 0 ) place += 26;
			printf("test10\n");
			texteChiffre[i] = 'A' + place;
			printf("test11\n");
		} else {
			texteChiffre[i] = texte[i];
			printf("test12\n");
		}
	}


	void dechiffrerCesar(char *texteChiffre, int decalage, char *texteDechiffre){
		int place;
		for (int i = 0 ; *(texte + i) != '\0'; i++) {
			if (texteChiffre[i] >= 'a' && texteChiffre[i] <= 'z') {
				place = texteChiffre[i] - 'a';
				place = (place-decalage) % 26;
				if (place < 0 ) place += 26;
				texteDechiffre[i] = 'a' + place;
			} else if (texteChiffre[i] >= 'A' && texteChiffre[i] <= 'Z') {
				place = texteChiffre[i] - 'A';
				place = (place-decalage) % 26;
				if (place < 0 ) place += 26;
				texteDechiffre[i] = 'A' + place;
			} else {
				texteDechiffre[i] = texteChiffre[i];
			}

		}

	}
}
