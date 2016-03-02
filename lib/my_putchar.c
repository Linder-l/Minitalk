/*
** my_putchar.c for my putchar in /home/loic/cours/prog_elem/moviesorter/CPE_2015_MovieSorter/lib
** 
** Made by Linder
** Login   <loic.linder@epitech.net>
** 
** Started on  Tue Dec  1 13:23:05 2015 Linder
** Last update Tue Dec  1 13:24:09 2015 Linder
*/

#include <unistd.h>

int	my_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}
