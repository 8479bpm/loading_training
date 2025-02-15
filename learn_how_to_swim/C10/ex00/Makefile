# Définition du compilateur et des options
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Fichiers sources et objets
SRC = ft_display_file.c
OBJ = ft_display_file.o
NAME = ft_display_file

# Règle par défaut pour créer le binaire
all: $(NAME)

# Compilation explicite de ft_display_file.c en ft_display_file.o
$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC) -o $(OBJ)

# Création du binaire à partir des objets
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

# Suppression des fichiers objets
clean:
	rm -f $(OBJ)

# Suppression du binaire et des fichiers objets
fclean: clean
	rm -f $(NAME)

# Recompilation complète : nettoyage et compilation
re: fclean all
