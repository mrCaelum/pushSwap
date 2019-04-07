##
## EPITECH PROJECT, 2018
## makefile
## File description:
## makefile
##

SRC	=	src/main.c		\
		src/add_lkl.c		\
		src/basics.c		\
		src/remove_lkl.c	\
		src/swap.c		\
		src/push.c		\
		src/rotate.c		\
		src/rev_rotate.c	\
		src/sort.c		\
		src/buffer.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-I./include/

NAME	=	push_swap

$(NAME):	$(OBJ)
	gcc $(OBJ) $(CFLAGS) -o $(NAME)

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
