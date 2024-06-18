##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## 
##

SRC	=	src/my_check.c \
		src/my_engine_math.c \
		src/my_engine.c \
		src/my_get.c \
		src/my_matrix.c \
		src/my_put.c \
		src/my_report.c \
		src/main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	102architect

all:	$(NAME)

$(NAME):
	make -C tests
	gcc $(SRC) -Wall -Wextra -I include -o $(NAME) -g -lm

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
