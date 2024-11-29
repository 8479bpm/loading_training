#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *str) {
    int result = 0;
    int sign = 1;  // Par défaut, le signe est positif
    int index = 0;
    int indexNeg = 0;

    // 1. Sauter les espaces blancs
    while (str[index] == ' ' || (str[index] >= 9 && str[index] <= 13)) 
        index++;

    // 2. Compter les signes '+' et '-'
    while (str[index] == '+' || str[index] == '-') {
        if (str[index] == '-') {
            indexNeg++;  // Compter les signes '-'
        }
        index++;
    }

    // 3. Appliquer le signe en fonction du nombre de signes '-'
    if (indexNeg % 2 != 0) {
        sign = -1;
    }

    // 4. Convertir les chiffres en entier
    while (str[index] >= '0' && str[index] <= '9') {
        result = result * 10 + (str[index] - '0');  // Convertir le caractère en entier
        index++;
    }

    // 5. Retourner le résultat avec le signe final
    return result * sign;
}

int main() {
    char str1[] = "   ---+--+1234ab567";  // Test avec des signes et des chiffres
    char str2[] = "42";
    char str3[] = "-123";
    char str4[] = "   +42";
    char str5[] = "   -0042";

    // Affichage des résultats
    printf("Test 1: %d\n", ft_atoi(str1));  // Doit afficher -1234
    printf("Test 2: %d\n", ft_atoi(str2));  // Doit afficher 42
    printf("Test 3: %d\n", ft_atoi(str3));  // Doit afficher -123
    printf("Test 4: %d\n", ft_atoi(str4));  // Doit afficher 42
    printf("Test 5: %d\n", ft_atoi(str5));  // Doit afficher -42

    return 0;
}
