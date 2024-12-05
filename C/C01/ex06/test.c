#include <stdio.h>
int	ft_strlen(char *str);

int 	main(void) {
	
	char*	chaine1 = "Je suis une super longue chaîne";
	int 	result;
	result = ft_strlen(chaine1);
	printf("Je mesure %d caractères. \n", result);
	return 0;

}

int 	ft_strlen(char * str) {
	int	index;
	index = 0;

	while(str[index] != '\0') {
		index++;
	}
		return index;
}

