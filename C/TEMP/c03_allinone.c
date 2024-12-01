#include <stdio.h>
#include <unistd.h>

// prototypage des fonctions
int	ft_strcmp(char *s1, char*s2);


// exercice00
int     ft_strcmp(char *s1, char*s2) {
int 	index;
	index = 0;

	while(s1[index] != '\0' && s2[index] != '\0') {
		if(s1[index] != s2[index]) {
		return (unsigned char)s1[index] - (unsigned char)s2[index];
		}
		index++;
	}

		return (unsigned char)s1[index] - (unsigned char)s2[index];
}

// fonction main et tests
int	main(void){
	
	// exercice00
	printf("exercice0\n");
	char* chaine1 = "Je suis différente.";
	char* chaine2 = "Je suis différente.";
	char* chaine3 = "Pas moi";
	int resultatFonction = ft_strcmp(chaine1, chaine2);
	int resultatFonction1 = ft_strcmp(chaine1, chaine3);
	int resultatFonction2 = ft_strcmp(chaine3, chaine2);
	printf("Cas 1:%d, cas 2:%d, cas 3:%d", resultatFonction, resultatFonction1, resultatFonction2);  
	return 0;
}
