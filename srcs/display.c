/*
** display.c for  in /home/broggi_t/projets/sudoku/srcs
** 
** Made by 
** Login   <broggi_t@epitech.net>
** 
** Started on  Fri Feb 28 21:13:06 2014 
** Last update Sat Mar  1 13:09:08 2014 
*/

#include <stdlib.h>
#include "my_str.h"
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
  while (++i < 9)
    {
      my_putchar(SIDE);
      j = -1;
      while (++j < 9)
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
