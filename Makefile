CC = gcc
CFLAGS =  -Wall -Wextra -Werror -I include
SRC = $(shell find src -name "*.c")
OBJ = $(SRC:.c=.o)
NAME = structmaster
all: $(NAME)

$(NAME): $(OBJ)
	@echo "--- Compilation de $(NAME) ---"
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "Succès ! Vous pouvez lancer ./$(NAME)"

%.o: %.c
@echo "Compilation de $< ..."
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "--- Nettoyage des fichiers objets ---"
	@rm -f $(OBJ)
	@echo "Fichiers objets supprimés."
fclean: clean
	@echo "--- Nettoyage complet ---"
	@rm -f $(NAME)
	@echo "Exécutable supprimé."

re: fclean all
.PHONY: all clean fclean re