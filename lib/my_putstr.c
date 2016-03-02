/*
** my_putstr.c for my putstr in /home/linder_l/j06
** 
** Made by Loic LINDER
** Login   <linder_l@epitech.net>
** 
** Started on  Mon Oct  5 10:37:03 2015 Loic LINDER
** Last update Tue Dec  1 13:21:25 2015 Linder
*/

#include <unistd.h>

int     my_putchar(char c);

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}
