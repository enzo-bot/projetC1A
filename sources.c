#include <stdlib.h>
#include <stdio.h>
#include <string.h>


void affichage() {
    FILE* fic;
    int lgLigne;
    fic = fopen("TexteAfficher.txt" , "r");
    if (fic = NULL) {
        printf("Erreur à l'ouverture du fichier texte à afficher");
    } else {
        char* ligne = NULL;
		size_t taille = 0;
		lgLigne = getline(&ligne, &taille, fic);
		while (lgLigne != -1) {
			printf("%s", ligne);
			lgLigne = getline(&ligne, &taille, fic);
		}
		fflush(stdout);
	free(ligne);
	fclose(fic);
    }
}