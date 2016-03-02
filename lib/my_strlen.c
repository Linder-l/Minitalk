/*
** my_strlen.c for my strlen in /home/linder_l/rendu/Piscine_C_J04/test-exercise_name.c
** 
** Made by Loic LINDER
** Login   <linder_l@epitech.net>
** 
** Started on  Thu Oct  1 13:42:55 2015 Loic LINDER
** Last update Fri Feb 12 10:44:12 2016 Linder
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (*str != '\0')
    {
      str++;
      i++;
    }
  return (i);
}
