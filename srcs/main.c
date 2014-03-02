/*
** main2.c for  in /home/bauwen_j/test/sudoku
** 
** Made by bauwens
** Login   <bauwen_j@epitech.net>
** 
** Started on  Sun Mar  2 19:16:39 2014 bauwens
** Last update Sun Mar  2 22:14:15 2014 
*/

#include <stdlib.h>
#include "my_str.h"
#include "sudo.h"

static void	free_grid(char **grid)
{
  int		i;

  i = -1;
  while (++i < 9)
    free(grid[i]);
  free(grid);
}

static int	check_params(int ac, char **av, char *color)
{
  int		i;

  i = 0;
  *color = 0;
  while (++i < ac)
    {
      if ((my_strcmp(av[i], "-c") || my_strcmp(av[i], "--color")))
	*color = 1;
    }
  return (SUCCESS);
}

int		main(int ac, char **av)
{
  char		**grid;
  char		color;
  int		i;

  check_params(ac, av, &color);
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
      display(grid, color);
      free_grid(grid);
      i++;
    }
  return (0);
}
