#include <stdlib.h>
#include <stdio.h>
#include <string.h>

boolean verifierAlphaNumerique(char *texte, char *texteVerifie) {
	FILE* fichier
	fichier = fopen("table_ASCII", "r");
	if (fichier == NULL) {
		printf("Erreur à l'ouverture du fichier table_ASCII\n");
	} else {
		printf("Ouverture du fichier");
		fclose(fichier);
	}
	



	fclose(fichier);
}