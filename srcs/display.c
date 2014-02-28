/*
** display.c for  in /home/broggi_t/projets/sudoku/srcs
** 
** Made by 
** Login   <broggi_t@epitech.net>
** 
** Started on  Fri Feb 28 21:13:06 2014 
** Last update Fri Feb 28 21:21:56 2014 
*/

#include <stdlib.h>
#include "sudo.h"

static void	display_bar()
{
  my_putchar(SIDE);
  my_putnchar(TOP, LINE_SIZE - 2);
  my_putchar(SIDE);
  my_putchar('\n');
}

int		display(char **map)
{
  int		i;
  int		j;

  i = -1;
  display_bar();
  while (map[++i])
    {
      my_putchar(SIDE);
      j = -1;
      while (map[i][++j])
	{
	  my_putchar(SEPARATOR);
	  my_putchar(map[i][j]);
	}
      my_putchar(SIDE);
      my_putchar('\n');
    }
  display_bar();
  return (SUCCESS);
}
