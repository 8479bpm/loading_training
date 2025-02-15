# Variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJ = srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o srcs/ft_strcmp.o
NAME = libft.a
INCLUDES = -I./includes

# Règle par défaut (équivalent de make all)
all: $(NAME)

# Création de la bibliothèque statique libft.a
$(NAME): $(OBJ)
	@echo "Création de la bibliothèque $(NAME)"
	ar rcs $(NAME) $(OBJ)
	@echo "Indexation de la bibliothèque $(NAME) avec ranlib"
	ranlib $(NAME)

# Compilation des fichiers objets
srcs/%.o: srcs/%.c
	@echo "Compilation de $<"
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# Nettoyage des fichiers objets
clean:
	@echo "Suppression des fichiers objets"
	rm -rf $(OBJ)

# Nettoyage complet : objets et bibliothèque
fclean: clean
	@echo "Suppression de la bibliothèque $(NAME)"
	rm -f $(NAME)

# Refaire : nettoyage complet puis compilation
re: fclean all
