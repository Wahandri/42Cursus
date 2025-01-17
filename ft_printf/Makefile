# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: usuario <usuario@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/11 12:00:00 by manugar2          #+#    #+#              #
#    Updated: 2025/01/17 19:12:10 by usuario          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del programa/librería
NAME = libftprintf.a

# Compilador y flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Archivos fuente y objetos
SRC = ft_printf.c ft_printf_utils.c
OBJ = $(SRC:.c=.o)

# Reglas principales
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Reglas de limpieza
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

# Regla para recompilar
re: fclean all

# Regla para evitar conflictos con archivos del sistema
.PHONY: all clean fclean re
