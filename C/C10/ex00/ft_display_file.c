#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[]) {

    // Aucun fichier passé en argument
    if (argc == 1) {
        write(1, "File name missing.\n", 19);
        return 1;
    }

    // Trop d'arguments
    if (argc > 2) {
        write(1, "Too many arguments.\n", 20);
        return 1;
    }

    // Ouverture du fichier
    int fc = open(argv[1], O_RDONLY);
    // Si open échoue (renvoie -1), on affiche l'erreur
    if (fc == -1) {
        write(1, "Cannot read file.\n", 18);
        return 1;
    }

    // Lecture du contenu du fichier et affichage
    char buffer[1024];  // Tableau fixe
    int bytesRead;
    while ((bytesRead = read(fc, buffer, sizeof(buffer))) > 0) {
        write(1, buffer, bytesRead);  // Affiche les données lues
    }

    // Vérification d'une erreur de lecture
    if (bytesRead == -1) {
        write(1, "Error while reading the file.\n", 30);
        close(fc);
        return 1;
    }

    // Fermeture du fichier
    close(fc);

    return 0;
}
