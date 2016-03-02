/*
** my_printf.c for my_printf in /home/loic/cours/systeme_unix/PSU_2015_my_printf
** 
** Made by Linder
** Login   <loic.linder@epitech.net>
** 
** Started on  Mon Nov  9 10:36:13 2015 Linder
** Last update Tue Dec  1 13:09:15 2015 Linder
*/

#include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int             my_putchar(char c);
int             my_put_nbr(int nb);
int             my_putnbr_base(int nb, char *base);
int             my_putstr(char *str);
int             my_strlen(char *str);
unsigned int    my_putnbr_unsigned(unsigned int nb);


int			flag_else(const char *str, int *i)
{
  my_putchar('%');
  my_putchar(str[*i]);
  return (0);
}

int                     flag_op(const char *str, va_list va, int *i)
{
  *i = *i + 1;
  if (str[*i] == 'o')
    {
      my_putchar('0');
      my_putnbr_base(va_arg(va, int), "01234567");
    }
  else if (str[*i] == 'x')
    {
      my_putchar('0');
      my_putchar('x');
      my_putnbr_base(va_arg(va, int), "0123456789abcdef");
    }
  else if (str[*i] == 'X')
    {
      my_putchar('0');
      my_putchar('X');
      my_putnbr_base(va_arg(va, int), "0123456789ABCDEF");
    }
  return (0);
}

int			first_flag(const char *str, va_list va, int *i)
{
  *i = *i + 1;
  if (str[*i] == 'd' || str[*i] == 'i')
    my_put_nbr(va_arg(va, int));
  else if (str[*i] == 's')
    my_putstr(va_arg(va, char *));
  else if (str[*i] == 'c')
    my_putchar(va_arg(va, int));
  else if (str[*i] == 'o')
    my_putnbr_base(va_arg(va, int), "01234567");
  else if (str[*i] == 'x')
    my_putnbr_base(va_arg(va, int), "0123456789abcdef");
  else if (str[*i] == 'X')
    my_putnbr_base(va_arg(va, int), "0123456789ABCDEF");
  else if (str[*i] == 'b')
    my_putnbr_base(va_arg(va, int), "01");
  else if (str[*i] == 'u')
    my_putnbr_unsigned(va_arg(va, unsigned int));
  else if (str[*i] == '%')
    my_putchar('%');
  else if (str[*i] == '#')
    flag_op(str, va, i);
  else
    flag_else(str, i);
  return (*i);
}

int			my_printf(const char *str, ...)
{
  va_list		va;
  int			i;

  va_start(va, str);
  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '%')
	i = first_flag(str, va, &i);
      else
	my_putchar(str[i]);
      i = i + 1;
    }
  va_end(va);
  return (0);
}
