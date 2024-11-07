#include <unistd.h>

// prototype de la fonction ft_putchar
void ft_putchar(char c);

// test de la fonction ft_putchar via multiples appels dans la fonction main
int main(void) {
    ft_putchar('a');
    ft_putchar('b');
    ft_putchar('c');
    ft_putchar('d');
    ft_putchar('e');
    ft_putchar('f');
    ft_putchar('g');
    ft_putchar('h');
    return 0;
}

// implémentation de la fonction ft_putchar
void ft_putchar(char c) {
     write(1, &c, 1);

}

