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

char* convertirAccents(char *texteVerifie){

    for (int i = 0 ; (texteVerifie + i) != '\0'; i++)
    {

        switch((texteVerifie + i))
        {
            case 'À' ... 'Ä' :
                *(texteVerifie + i) = 'A';
                break;

            case 'È' ... 'Ë' :
                *(texteVerifie + i) = 'E';
                break;

            case 'Ì' ... 'Ï' :
                *(texteVerifie + i) = 'I';
                break;

            case 'Ò' ... 'Ö' :
                *(texteVerifie + i) = 'O';
                break;

            case 'Ù' ... 'Ü' :
                *(texteVerifie + i) = 'U';
                break;

            case 'Ý' :
                *(texteVerifie + i) = 'Y';
                break;

            case 'Ç' :
                *(texteVerifie + i) = 'C';
                break;

            case 'Ñ' :
                *(texteVerifie + i) = 'N';
                break;

            case 'à' ... 'ä' :
                *(texteVerifie + i) = 'a';
                break;

            case 'è' ... 'ë' :
                *(texteVerifie + i) = 'e';
                break;

            case 'ì' ... 'ï' :
                *(texteVerifie + i) = 'i';
                break;

            case 'ò' ... 'ö' :
                *(texteVerifie + i) = 'o';
                break;

            case 'ù' ... 'ü' :
                *(texteVerifie + i) = 'u';
                break;

            case 'ç' :
                *(texteVerifie + i) = 'c';
                break;

            case 'ñ' :
                *(texteVerifie + i) = 'n';
                break;

            case 'ý' :
                *(texteVerifie + i) = 'y';
                break;

            case 'ÿ' :
                *(texteVerifie + i) = 'y';
                break;


            default :
                *(texteVerifie + i) = *(texteVerifie + i);
                break;

        }

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
