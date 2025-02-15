#include <unistd.h>

// Fonction pour vérifier si un caractère est un séparateur (espace ou tabulation)
int is_separator(char c) {
    return c == ' ' || c == '\t';
}

// Fonction pour convertir une lettre minuscule en majuscule
char put_maj(char c) {
    if (c >= 'a' && c <= 'z')
        return c - 32;
    return c;
}

int main(int argc, char *argv[]) {
    int index = 0;

    // Vérifier que le programme a reçu exactement un argument
    if (argc != 2) {
        write(1, "\n", 1);
        return 0;
    }

    while (argv[1][index] != '\0') {
        int start = index;

        // Trouver la fin du mot
        while (argv[1][index] != '\0' && !is_separator(argv[1][index])) {
            index++;
        }

        // Mettre en majuscule la dernière lettre du mot
        if (start != index) {
            argv[1][index - 1] = put_maj(argv[1][index - 1]);
        }

        // Écrire le mot ou le séparateur
        while (start < index) {
            write(1, &argv[1][start], 1);
            start++;
        }

        // Écrire le séparateur si présent
        if (argv[1][index] != '\0') {
            write(1, &argv[1][index], 1);
            index++;
        }
    }

    write(1, "\n", 1);
    return 0;
}
