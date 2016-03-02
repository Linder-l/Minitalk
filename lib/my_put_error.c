/*
** my_put_error.c for  in /home/loic/cours/systeme_unix/minitalk/PSU_2015_minitalk/lib
** 
** Made by Linder
** Login   <loic.linder@epitech.net>
** 
** Started on  Sun Feb  7 15:58:10 2016 Linder
** Last update Sun Feb  7 23:43:40 2016 Linder
*/

#include <unistd.h>

int	my_putchar_error(char c)
{
  write(2, &c, 1);
  return (0);
}

int	my_put_error(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar_error(str[i]);
      i++;
    }
  return (0);
}
