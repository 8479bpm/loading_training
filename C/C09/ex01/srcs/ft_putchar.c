#include <unistd.h>

// implémentation de la fonction ft_putchar
void ft_putchar(char c) {
     write(1, &c, 1);

}

