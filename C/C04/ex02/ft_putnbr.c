
#include <unistd.h>
void ft_putchar(char c) {
     write(1, &c, 1);
     }

void ft_putnbr(int nb) {
    char stockageNombre[10];
    int index = 0;

    if (nb < 0) {
        ft_putchar('-');
        nb = -nb;
    }

    if (nb == -2147483648) {
        ft_putchar('-');
        ft_putchar('2');
        nb = 147483648;
    }

    if (nb == 0) {
        ft_putchar('0');
        return;
    }

    while (nb > 0) {
        stockageNombre[index] = (nb % 10) + '0';
        nb = nb / 10;
        index++;

    }
    
   while (index > 0) {
    ft_putchar(stockageNombre[index - 1]);  // Afficher les chiffres dans l'ordre inverse
    index--;
}
}


int main(void) {
    int nombreTest = -42;
    int nombreTest1 = 4542;
    int nombreTest2 = 0;
    int nombreTest3 = 456;
    int nombreTest4 = -452;
    
    ft_putnbr(-2147483648);
    write(1, "\n", 1);  
    ft_putnbr(nombreTest);
    write(1, "\n", 1);  
    ft_putnbr(nombreTest1);
    write(1, "\n", 1);  
    ft_putnbr(nombreTest2);
    write(1, "\n", 1);  
    ft_putnbr(nombreTest3);
    write(1, "\n", 1);  
    ft_putnbr(nombreTest4);
    return 0;

}
