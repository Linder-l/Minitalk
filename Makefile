##
## Makefile for  in /home/loic/cours/systeme_unix/minitalk/PSU_2015_minitalk
## 
## Made by Linder
## Login   <loic.linder@epitech.net>
## 
## Started on  Mon Feb  1 12:55:15 2016 Linder
## Last update Mon Feb  8 11:19:57 2016 Linder
##



CC		= gcc

CFLAGS		= -lmy -L lib/

RM		= rm -rf

CLIENT_NAME	= client

SERVER_NAME	= server

SRCS_SERVER	= server/server.c

SRCS_CLIENT	= client/client.c

OBJS_SERVER	= $(SRCS_SERVER:.c=.o)

OBJS_CLIENT	= $(SRCS_CLIENT:.c=.o)

all:		$(CLIENT_NAME) $(SERVER_NAME)

$(CLIENT_NAME): $(OBJS_CLIENT)
		$(CC) -o client/$(CLIENT_NAME) $(OBJS_CLIENT) $(CFLAGS) -I ./client

$(SERVER_NAME):	$(OBJS_SERVER)
		$(CC) -o server/$(SERVER_NAME) $(OBJS_SERVER) $(CFLAGS) -I ./server

clean:
		$(RM) $(OBJS_SERVER)
		$(RM) $(OBJS_CLIENT)

fclean: clean
		$(RM) client/$(CLIENT_NAME)
		$(RM) server/$(SERVER_NAME)

re: 		fclean all

.PHONY: 	all clean fclean re
