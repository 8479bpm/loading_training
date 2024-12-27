CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = ft_display_file
SRC = $(wildcard *.c)

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean : 
	rm -rf *.o 

fclean: clean
	rm -f $(NAME)