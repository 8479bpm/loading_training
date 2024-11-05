#include <unistd.h>

void ft_print_alphabet(void);

int main(void) {
    ft_print_alphabet();
    return 0;
}


void ft_print_alphabet(void) {

    // code ASCII de 'a' = 97;
    char letters = 97;

    // utilisation boucle while pour itérer de 97 ('a') à 122 ('z')
    while (letters <= 122) {
        write(1, &letters, 1); 
        letters++;  
    } 

}