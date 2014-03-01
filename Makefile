##
## Makefile for  in /home/broggi_t/projets/rush2
##
## Made by broggi_t
## Login   <broggi_t@epitech.eu>
##
## Started on  Fri 28 Feb 15:52:28 2014 broggi_t
## Last update Sat Mar  1 01:18:29 2014 
##

SRCS	= srcs/algo.c \
	  srcs/check.c \
	  srcs/display.c \
	  srcs/get_next_line.c \
	  srcs/main.c \
	  srcs/my_str.c

OBJS	= $(SRCS:.c=.o)

NAME	= bin/sudoki-bi

CC	= cc

CFLAGS	+= -W -Wall -Wextra -pedantic -ansi
CFLAGS	+= -I includes/

RM	= rm -f

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
