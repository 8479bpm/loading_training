#include <unistd.h>

void ft_putnbr(int nb);

int main(void) {

    ft_putnbr(42);
    ft_putnbr(-2);

    return 0;
}

// WIP
void ft_putnbr(int nb) {

    char dizaine = (nb/10) + '0';
    char unite = (nb%10) + '0';

    if (nb > 0) {

        write(1, &dizaine, 1);
        write(1, &unite, 1);


    } else if (nb < 0) {

        write(1, "-", 1);
        char dizaine = (nb/10) + '0';
        char unite = (nb%10) + '0';

    } else {

        write(1, "0", 1);

    }

}