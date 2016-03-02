##
## Makefile for makefile in /home/loic/cours/prog_elem/moviesorter/CPE_2015_MovieSorter/lib
## 
## Made by Linder
## Login   <loic.linder@epitech.net>
## 
## Started on  Tue Dec  1 11:26:10 2015 Linder
## Last update Sun Feb  7 23:33:08 2016 Linder
##

CC	= gcc

RM	= rm -f

NAME	= libmy.a

SRCS	= my_putchar.c		\
        my_printf.c		\
	my_atoi.c		\
	my_put_error.c		\
        my_putnbr_base.c        \
        my_putnbr_unsigned.c    \
	my_putstr.c             \
	my_strlen.c		\
	my_put_nbr.c

OBJS	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
