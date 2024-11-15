/* #include <stdio.h>


int main(void) {
    
int nombre1;
int nombre2;   
int nombreTotal; 

printf("Rentrez le nombre 1:\n");
scanf("%d", &nombre1);
printf("Rentrez le nombre 2:\n");
scanf("%d", &nombre2);

nombreTotal = nombre1 * nombre2;

printf("Le nombre total est: %d", nombreTotal);
    return 0;
}

 */

/* -------------------------------------------------------------------------------------------------------------

#include <stdio.h>

int main(void) {
    
float nombre1;
float nombre2;   
float nombreTotal; 

printf("Rentrez le nombre 1:\n");
scanf("%f", &nombre1);
printf("Rentrez le nombre 2:\n");
scanf("%f", &nombre2);

if (nombre2 == 0) {
    printf("Erreur : division par 0 !");
} else {
nombreTotal = nombre1/nombre2;
printf("Le nombre total est: %f", nombreTotal); 
}
    return 0;

} */

/* #include <stdio.h>

void isPair(void) {

    int nombre1;

    printf("Rentrez un nombre :");
    scanf("%d", &nombre1);

    if (nombre1%2 == 0) {
        printf("le résultat est pair");
    } else {
        printf("le résultat est impair");
    }
}

int main(void) { 

    isPair();
    return 0;
}
 */

#include <stdio.h>  // Inclure la bibliothèque STanDard Input Output
                    // permet d'utiliser, entre autre, printf et scanf
int main() 
{
	int reponse;	// Entier : reponse
	
	do {				// Faire
		printf("Combien font 2 x 2 ? "); // Afficher : "Combien font 2 x 2 ? "
		scanf("%d", &reponse);		// Entrer : reponse
	
		if(reponse != 4) {			// Si(reponse != 4)
			printf("\nFaux, recommencez\n"); //  Afficher : "Faux, recommencez "
		}
			
	} while (reponse != 4);	// Tant que (reponse != 4)
	
	printf("\nBravo !\n");	// Afficher : "Bravo !"
	
	return 0;
}

