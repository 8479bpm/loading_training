#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char *argv[])
{
	int		fd;
	char	buffer[128];
	int		bytes_read;

	// Vérification du nombre d'arguments
	if (argc < 2)
	{
		write(2, "File name missing.\n", 20);
		return (1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 21);
		return (1);
	}

	// Ouverture du fichier en mode lecture seule
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)  // Si l'ouverture échoue, afficher "Cannot read file."
	{
		write(2, "Cannot read file.\n", 19);
		return (1);
	}

	// Lecture du fichier et affichage de son contenu
	while ((bytes_read = read(fd, buffer, sizeof(buffer))) > 0)
	{
		write(1, buffer, bytes_read);
	}

	// Fermeture du fichier
	close(fd);

	return (0);
}
