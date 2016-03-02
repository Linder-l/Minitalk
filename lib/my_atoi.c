/*
** my_atoi.c for atoi in /home/linder_l/rendu/Piscine_C_evalexpr
** 
** Made by Loic LINDER
** Login   <linder_l@epitech.net>
** 
** Started on  Thu Oct 22 21:16:37 2015 Loic LINDER
** Last update Fri Nov 20 10:15:40 2015 Linder
*/

int     my_atoi(char *str)
{
  int	resultat;
  int   var;
  int	i;

  resultat = 0;
  var = 0;
  i = 0;
  while (str[i] == '-')
    {
      var = var + 1;
      i = i + 1;
    }
  while (str[i] >= '0' && str[i] <= '9')
    {
      resultat = resultat * 10;
      resultat = (str[i] - '0') + resultat;
      i = i + 1;
    }
  if ((var % 2) == 1)
    return (-resultat);
  return (resultat);
}
