#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool verifierAlphaNumerique(char *texte, char *texteVerifie) {

	for (int i = 0 ; *(texte + i) != '\0'; i++)
	{
		if (isalnum(*(texte + i)) && !isspace(*(texte + i))){
			return false;
		}
	}
	return true;
}

