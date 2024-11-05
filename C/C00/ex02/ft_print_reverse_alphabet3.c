#include <unistd.h>

// prototypage fonction
void ft_print_alphabet(void);

// test fonction
int main(void) {
    ft_print_alphabet();
    return 0;
}

// implémentation de la fonction
void ft_print_alphabet(void) {
    int letters = 122;
    while(letters >= 97) {
        write(1, &letters, 1);
        letters--;
    }
}

