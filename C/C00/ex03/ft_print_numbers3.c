#include <unistd.h>

void ft_print_numbers(void);

int main(void) {
    ft_print_numbers();
    return 0;

}

// il faut utiliser les nombre en tant que charactère et non leur valeur num car on veut afficher des chars à la fin
void ft_print_numbers(void) {
        char numbers = '0';
        while (numbers <= '9') 
    {
        write(1, &numbers, 1);
        numbers++;
    }
}


