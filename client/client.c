/*
** client.c for client in /home/loic/cours/systeme_unix/minitalk/PSU_2015_minitalk/client
** 
** Made by Linder
** Login   <loic.linder@epitech.net>
** 
** Started on  Wed Feb  3 10:21:38 2016 Linder
** Last update Fri Feb 12 14:07:52 2016 Linder
*/

#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "../include/minitalk.h"

void		send_msg_to_server(char my_char, int my_pid)
{
  int		i;

  i = 0;
  while (i < 8)
    {
      if ((my_char >> i) & 1)
	{
	  if (kill(my_pid, SIGUSR1) == -1)
	    exit(0);
	}
      else
	{
	  if (kill(my_pid, SIGUSR2) == -1)
	    exit(0);
	}
      usleep(800);
      i++;
    }
}

int		main(int argc, char **argv)
{
  char	    	*my_string;
  int		my_pid;
  int		i;

  if (argc != 3)
    {
      my_put_error("USAGE : ./client PID [my_string]\n");
      exit(0);
    }
  i = 0;
  my_pid = my_atoi(argv[1]);
  my_string = argv[2];
  while (my_string[i])
    {
      send_msg_to_server(my_string[i], my_pid);
      i++;
    }
  send_msg_to_server(my_string[i], my_pid);
  return (0);
}
