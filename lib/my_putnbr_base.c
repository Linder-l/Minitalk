/*
** my_putnbr_base.c for my_putnbr_base in /home/loic/cours/systeme_unix/PSU_2015_my_printf
** 
** Made by Linder
** Login   <loic.linder@epitech.net>
** 
** Started on  Mon Nov  9 15:09:09 2015 Linder
** Last update Tue Dec  1 13:20:43 2015 Linder
*/

#include <unistd.h>

int     my_putchar(char c);
int     my_strlen(char *str);

int	my_putnbr_base(int nb, char *base)
{
  int	result;
  int	rest;

  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  result = (nb / my_strlen(base));
  rest = (nb % my_strlen(base));
  if (result > 0)
    my_putnbr_base(result, base);
  my_putchar(base[rest]);
  return (0);
}
