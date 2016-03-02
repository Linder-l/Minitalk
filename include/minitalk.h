/*
** minitalk.h for minitalk in /home/loic/cours/systeme_unix/minitalk/PSU_2015_minitalk
** 
** Made by Linder
** Login   <loic.linder@epitech.net>
** 
** Started on  Wed Feb  3 10:54:59 2016 Linder
** Last update Sun Feb  7 23:26:27 2016 Linder
*/

#ifndef MINITALK_H_
# define MINITALK_H_

int             my_putchar(char c);
int             my_atoi(char *str);
int             my_printf(const char *str, ...);
int		my_put_error(char *str);
void            send_msg_to_server(char my_char, int my_pid);
void            receive_signal_from_client(int sig);

#endif
