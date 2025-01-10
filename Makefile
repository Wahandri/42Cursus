# Nombre del archivo que vamos a generar
NAME = get_next_line.a

# Compilador y flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Archivos fuente y objetos
SRC = get_next_line.c get_next_line_utils.c
OBJ = $(SRC:.c=.o)

# Regla principal para compilar la librería
all: $(NAME)

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ) # Crea la librería estática a partir de los objetos

# Limpia los archivos objeto
clean:
		rm -f $(OBJ)

# Limpia todo (objetos y librería)
fclean: clean
		rm -f $(NAME)

# Vuelve a compilar desde cero
re: fclean all
