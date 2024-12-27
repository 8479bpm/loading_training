#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[]) {
    // Aucun fichier passé en argument
    if (argc == 1) {
        write(2, "File name missing.\n", 19); // Affichage sur la sortie d'erreur (stderr)
        return 1;
    }
    // Trop d'arguments
    if (argc > 2) {
        write(2, "Too many arguments.\n", 20); // Affichage sur la sortie d'erreur (stderr)
        return 1;
    }

    // Ouverture du fichier en lecture seule
    int fc = open(argv[1], O_RDONLY);
    // Si open échoue, afficher l'erreur et retourner 1
    if (fc == -1) {
        write(2, "Cannot read file.\n", 18); // Affichage sur la sortie d'erreur (stderr)
        return 1;
    }

    // Déclaration d'un buffer pour lire le fichier en morceaux
    char buffer[1024];
    int bytesRead;

    // Lire le fichier jusqu'à la fin
    while ((bytesRead = read(fc, buffer, 1024)) > 0) {
        write(1, buffer, bytesRead); // Affichage des données lues
    }

    // Vérification d'erreurs de lecture (si bytesRead < 0)
    if (bytesRead < 0) {
        write(2, "Cannot read file.\n", 18); // Affichage sur la sortie d'erreur (stderr)
        close(fc); // Fermeture du fichier avant de quitter
        return 1;
    }

    // Fermeture du fichier
    close(fc);
    return 0;
}
