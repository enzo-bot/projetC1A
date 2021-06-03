boolean verifierAlphaNumerique(char *texte);
char* convertirAccents(char *texteVerifie);
char* chiffrerCesar(char *texteSansAccents, int decalage);
char* chiffrerVigenere(char *texteSansAccents, char *cle);
char* dechiffrerCesar(char *texteChiffre, int decalage);
char* dechiffrerVigenere(char *texteChiffre, char *cle);