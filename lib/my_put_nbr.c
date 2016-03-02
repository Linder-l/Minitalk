/*
** my_put_nbr.c for my_put_nbr in 
** 
** Made by Linder
** Login   <loic@epitech.net>
** 
** Started on  Wed Nov 11 11:38:37 2015 Linder
** Last update Fri Feb 12 11:20:05 2016 Linder
*/

#include <unistd.h>

int     my_putchar(char c);

int	my_put_nbr(int nb)
{
  int	i;
  int	j;

  i = 1;
  j = 0;
  if (nb < 0)
    {
      write(1, "-", 1);
      if (-(nb) != (nb * -1))
	{
	  j = 1;
	  nb = (nb + 1) * -1;
	}
      else
	nb = nb * -1;
    }
  while ((nb / i) > 9)
    i = i * 10;
  while (i > 9)
    {
      my_putchar((nb / i % 10) + '0');
      i = i / 10;
    }
  my_putchar((j != 1) ? nb / i % 10 + '0' : ((nb / i % 10) + 1) + '0');
  return (0);
}
