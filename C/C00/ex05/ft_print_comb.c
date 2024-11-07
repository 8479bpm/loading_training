#include <unistd.h>

void ft_print_comb(void);

int main(void) {

    ft_print_comb();
    return 0;
}

void ft_print_comb(void) {
    
    char i = 0;
    char j, k;

            // La boucle sur i : de 0 à 7
            while (i <= 7) 
        {
            // j commence à i+1
            // Les boucles doivent être imbriquées
            j = i + 1;

            // La boucle sur j : de i+1 à 8
            while (j <= 8) 
        {
            // k commence à j+1
            k = j + 1;

            // La boucle sur k : de j+1 à 9
            while (k <= 9) 
        {
            // conversion en ASCII des nombres pour pouvoir les afficher avec write
            char a = i + '0';
            char b = j + '0';
            char c = k + '0';

            write(1, &a, 1);
            write(1, &b, 1);
            write(1, &c, 1);
            
            // on affiche un espace et une virgule entre chaque triplets, sauf à la fin, la fin est atteinte quand ijk sont à leur valeur max
            if (!(i == 7 && j == 8 && k == 9)) {
                write(1, ", ", 2);
            }
            
            k++;
            
            
        }
           
            j++;
            
        }
            
             i++;
            
        }
            
}
