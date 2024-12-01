#include <stdio.h>

// prototypage fonction
int ft_atoi(char *str);


// résolution exercice

// exercice 03
int     ft_atoi(char *str) {
    int     index, counter, result;
    index = 0, counter = 0, result = 0;

    // gestion whitespace, on incrémenta l'index pour arriver là où il n'y en a plus
    while(str[index] == ' ' || (str[index] >= 9 && str[index] <= 13)) {
        index++;
    }

    while(str[index] == '+' || str[index] == '-') {
        if(str[index] == '-') {
            counter++;
        }
        index++;
    }

    while(str[index] >= '0' && str[index] <= '9') {
        result = result * 10 + (str[index] - '0'); 
        index++;
    }

    if((counter%2) != 0) {
        result = -result;
    }
    return result;
}





// tests
int main() {
    char str[] = " ---+--+1234ab567";
    printf("%d\n", ft_atoi(str));  // Affichera -1234
    return 0;
}