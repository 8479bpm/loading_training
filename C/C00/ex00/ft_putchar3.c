#include <unistd.h>

void ft_putchar(char c);

// test fonction avec le main
int main(void) {
    ft_putchar('a');
    ft_putchar('b');
    ft_putchar('c');
    ft_putchar('d');
    ft_putchar('e');
    ft_putchar('f');
    ft_putchar('g');
    return 0;
}

// implémentation fonction
void ft_putchar(char c) {
    write(1, &c, 1);

}

