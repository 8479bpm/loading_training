#include <unistd.h>

void ft_print_alphabet(void);

int main(void) {
    ft_print_alphabet();
    return 0;
}


void ft_print_alphabet(void) {

    /* on utilise une variable pour stocker la valeur initiale 'z' à partir de laquelle on itère, 
    elle va être convertie par le compilateur en sa valeur ASCII, 
    on pourrait utiliser cette valeur numérique également pour itérer */
    char letters = 'z';

    // utilisation boucle while pour itérer de 122 ('z') à 97 ('a') 
    while(letters >= 'a') {
        write(1, &letters, 1);
        letters--;
    }
}

