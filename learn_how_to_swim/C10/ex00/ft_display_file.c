/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 8479bpm <8479bpm@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 13:22:46 by 8479bpm           #+#    #+#             */
/*   Updated: 2025/02/07 13:24:38 by 8479bpm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

void	ft_display_file(char *filename)
{
	int		fd;
	char	buffer[1024];
	ssize_t	bytes_read;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.", 17);
		return ;
	}
	bytes_read = read(fd, buffer, sizeof(buffer));
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(fd, buffer, sizeof(buffer));
	}
	if (bytes_read == -1)
	{
		write(2, "Cannot read file.", 17);
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing\n", 18);
	else if (argc > 2)
		write(2, "Too many arguments\n", 19);
	else
		ft_display_file(argv[1]);
	return (0);
}
