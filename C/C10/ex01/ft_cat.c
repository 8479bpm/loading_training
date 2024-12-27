#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

int	ft_strlen(char *str)
{
	int	len;
	len = 0;
	while (str[len] != '\0')
	{
	        len++;
	}
	return (len);
}

int	print_error(char *message)
{
	write(2, message, ft_strlen(message));
	return (1);
}

int	open_file(char *filename)
{
	int	fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read files.\n", 20);
		write(2, strerror(errno), ft_strlen(strerror(errno)));
		write(2, "\n", 1);
	}
	return fd;
}

void	read_and_print_file(int fd)
{
	char	buffer[128];
	int 	bytes_read;
	
	bytes_read = read(fd, buffer, sizeof(buffer));
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(fd, buffer, sizeof(buffer));
	}	
}

void	close_file(int fd)
	{
		close(fd);
	}


int	main(int argc, char *argv[]) 
{
	int	fd;
	fd = open_file(argv[1]);

	if (argc < 2)
		return (print_error("File name is missing.\n"));
	if (argc > 2) 
		return (print_error("Too many arguments.\n"));

	read_and_print_file(fd);
	close_file(fd);

	return 0;
}
