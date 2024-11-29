#include <unistd.h>

void ft_putstr(char *str);

void ft_putstr(char *str) {
    int index;
    index = 0;

    while(str[index] != '\0') {
        write(1, &str[index], 1);
        index++;
    }
    
}

int main(void) {
    char chaine1[] = "Affiche moi à l'écran";
    ft_putstr(chaine1);
    return 0;
}
