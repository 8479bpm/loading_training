#include <unistd.h>

void ft_print_comb2(void);

int main(void) {

    ft_print_comb2();
    
    return 0;
}

void ft_print_comb2(void) {

 int x = 0;
 int y;

    while (x <= 98) {

    y = x+1;

    while (y <= 99) {
        // on récupère les chiffres des dizaines par division et les unités par modulo
        char a = (x / 10) + '0';
        char b = (x % 10) + '0';
        char c = (y / 10) + '0';
        char d = (y % 10) + '0';

        write(1, &a, 1);
        write(1, &b, 1);
        write(1, " ", 1);
        write(1, &c, 1);
        write(1, &d, 1);

        if (!(x == 98 && y == 99))
        write(1, ", ", 2);
        y++;
    }
    x++;
} 



}