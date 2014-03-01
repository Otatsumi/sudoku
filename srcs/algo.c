/*
** algo.c for  in /home/broggi_t/projets/sudoku/srcs
** 
** Made by 
** Login   <broggi_t@epitech.net>
** 
** Started on  Sat Mar  1 00:38:41 2014 
** Last update Sat Mar  1 16:11:17 2014 bauwens
*/

#include "sudo.h"

static int	is_solved(char **map)
{
  int		i;
  int		j;

  i = -1;
  while (++i < 9)
    {
      j = -1;
      while (++j < 9)
	{
	  if (map[i][j] == 0 || map[i][j] == MORE)
	    return (0);
	}
    }
  return (1);
}

int		algo(char **map)
{
  int		i;
  int		j;
  int		status;
  char		tmp;

  while (!is_solved(map))
    {
      my_putchar('c');
      status = 0;
      i = -1;
      while (++i < 9)
	{
	  j = -1;
	  while (++j < 9)
	    if (map[i][j] == 0 || map[i][j] == MORE)
	      {
		tmp = get_value(i, j, map);
		if (tmp != map[i][j])
		  {
		    ++status;
		    map[i][j] = tmp;
		  }
	      }
	}
      if (status == 0)
	return (FAILURE);
    }
  return (SUCCESS);
}
