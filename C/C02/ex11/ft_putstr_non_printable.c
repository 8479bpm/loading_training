#include <stdio.h>
#include <unistd.h>

void ft_putstr_non_printable(char *str);
void ft_putstr_non_printable(char *str) {

int     index;
index = 0;

while(str[index] != '\0') 
{
    // si le caractère est imprimable, entre 32 et 126 inclut
    if((str[index] >= 32 && str[index] <= 126)) {
        write(1, &str[index], 1);
    } else {
        char hex[3];  // Pour stocker la chaîne hexadécimale (2 chiffres + \0)
            
            // Afficher le caractère '\'
            write(1, "\\", 1);
            
            // Premier chiffre hexadécimal
            int first_digit = str[index] / 16;  // Division par 16
            if (first_digit < 10) {
                hex[0] = first_digit + '0';  // Si inférieur à 10, c'est un chiffre '0'-'9'
            } else {
                hex[0] = first_digit - 10 + 'a';  // Si supérieur ou égal à 10, c'est une lettre 'a'-'f'
            }
            
            // Deuxième chiffre hexadécimal
            int second_digit = str[index] % 16;  // Modulo 16
            if (second_digit < 10) {
                hex[1] = second_digit + '0';  // Si inférieur à 10, c'est un chiffre '0'-'9'
            } else {
                hex[1] = second_digit - 10 + 'a';  // Si supérieur ou égal à 10, c'est une lettre 'a'-'f'
            }
            
            hex[2] = '\0';  // Ajouter le caractère de fin de chaîne
            
            // Afficher les deux chiffres hexadécimaux
            write(1, hex, 2);
        }
        
        // Passer au caractère suivant
        index++;
}
}

int main(void) {
    char* chaine1 = "Hello\nWorld";
    ft_putstr_non_printable(chaine1);
    return 0;
}
