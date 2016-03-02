/*
** server.c for server in /home/loic/cours/systeme_unix/minitalk/PSU_2015_minitalk
** 
** Made by Linder
** Login   <loic.linder@epitech.net>
** 
** Started on  Wed Feb  3 12:02:42 2016 Linder
** Last update Fri Feb 12 14:08:33 2016 Linder
*/

#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include "../include/minitalk.h"

void		receive_signal_from_client(int sig)
{
  static int	i;
  int		bin;
  static char	my_char;

  if (sig == SIGUSR1)
    bin = 1;
  else if (sig == SIGUSR2)
    bin = 0;
  my_char = my_char + (bin << i++);
  if (i == 8)
    {
      if (my_char != '\0')
	my_putchar(my_char);
      else
	my_putchar('\n');
      my_char = 0;
      i = 0;
    }
}

int		main()
{
  int		my_pid;

  my_pid = getpid();
  my_printf("My PID server is %d\n", my_pid);
  if (signal(SIGUSR1, receive_signal_from_client) == SIG_ERR)
    exit(0);
  if (signal(SIGUSR2, receive_signal_from_client) == SIG_ERR)
    exit(0);
  while (1)
    pause();
  return (0);
}
