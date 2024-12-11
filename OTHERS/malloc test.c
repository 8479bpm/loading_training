#include <stdio.h>
#include <stdlib.h>

int main(void) {

int nombreJoueur = 0;
int *liste_joueurs = NULL;
int i;

printf("Combien de joueurs ?");
scanf("%d", &nombreJoueur);

liste_joueurs = malloc(sizeof(int) * nombreJoueur);

if(liste_joueurs == NULL)
exit(1);

for(i=0; i <nombreJoueur; i++) {
printf("Joueurs %d -> numero %d\n", i + 1, i*3);
}

for(i=0; i <nombreJoueur; i++) {
printf("[%d] ", liste_joueurs[i]);
}
free(liste_joueurs);
return 0;
}
