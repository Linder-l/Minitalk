/*
** my_putnbr_unsigned.c for my_putnbr_unsigned in /home/loic/Documents/PSU_2015_my_printf
** 
** Made by Linder
** Login   <loic.linder@epitech.net>
** 
** Started on  Fri Nov 13 09:37:56 2015 Linder
** Last update Tue Dec  1 13:21:08 2015 Linder
*/

#include <unistd.h>

int     my_putchar(char c);

unsigned int            my_putnbr_unsigned(unsigned int nb)
{
  unsigned int          i;
  unsigned int          j;

  i = 1;
  j = 0;
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
