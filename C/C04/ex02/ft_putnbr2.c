#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c) {
     write(1, &c, 1);
}

void ft_putnbr(int nb) {
    char stockageChiffres[11];
    int index = 0;

    // cas particulier de INT_MIN
    if(nb == -2147483648) {
        ft_putchar('-');
        ft_putchar('2');
        nb = 147483648;
        }

    // pour 0, on affiche 0 et on exit
    if(nb == 0) {
        ft_putchar('0');
        return;
        }

    // prendre la valeur absolue en cas de nombre neg
    if(nb < 0) {
        ft_putchar('-');
        nb = -nb;
        } 

    while(nb > 0) {
        stockageChiffres[index] = (nb % 10) + '0';
            nb = nb / 10;
            index++;
        }
        
    while(index > 0) {
        ft_putchar(stockageChiffres[index - 1]);
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