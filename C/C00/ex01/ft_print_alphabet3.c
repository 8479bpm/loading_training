#include <unistd.h>

void ft_print_alphabet(void);

int main(void) {
    ft_print_alphabet();
    return 0;
}

void ft_print_alphabet(void) {

    /* on utilise une variable pour stocker la valeur initiale 'a' à partir de laquelle on itère, 
    elle va être convertie par le compilateur en sa valeur ASCII, 
    on pourrait utiliser cette valeur numérique également pour itérer */
    char letters = 'a';

    // utilisation boucle while pour itérer de 97 ('a') à 122 ('z')
    while (letters <= 'z') {
        write(1, &letters, 1); 
        letters++;  
    } 

}