int estAlphaNum(int c);
int verifierAlphaNumerique(char *texte);
char* convertirAccents(char *texteVerifie);
char* chiffrerCesar(char *texte, int decalage, char *texteChiffre);
char* chiffrerVigenere(char *texteSansAccents, char *cle);
char* dechiffrerCesar(char *texteChiffre, int decalage, char *texteDechiffre);
char* dechiffrerVigenere(char *texteChiffre, char *cle);