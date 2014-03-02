/*
** main2.c for  in /home/bauwen_j/test/sudoku
** 
** Made by bauwens
** Login   <bauwen_j@epitech.net>
** 
** Started on  Sun Mar  2 19:16:39 2014 bauwens
** Last update Sun Mar  2 20:12:27 2014 bauwens
*/

#include <stdlib.h>
#include "my_str.h"
#include "sudo.h"

void		free_grid(char **grid)
{
  int		i;

  i = -1;
  while (++i < 9)
    free(grid[i]);
  free(grid);
}

int		main(void)
{
  char		**grid;
  int		i;

  i = 0;
  while ((grid = get_grid()) != NULL)
    {
      if (i != 0)
	{
	  my_putnchar('#', 20);
	  my_putchar('\n');
	}
      if (algo(grid) == FAILURE)
	my_puterr(INVALID_GRID);
      display(grid);
      free_grid(grid);
      i++;
    }
  return (0);
}
