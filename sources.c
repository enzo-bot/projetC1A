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

char* chiffrerCesar(char *texteSansAccents, int decalage) {

	for (int i = 0 ; *(texteSansAccents + i) != '\0'; i++) {
		if (texteSansAccents[i] >= 'a' && texteSansAccents[i] <= 'z') {
			
		}
	}

}
