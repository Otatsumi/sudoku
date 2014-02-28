/*
** check.c for  in /home/broggi_t/projets/sudoku/srcs
** 
** Made by 
** Login   <broggi_t@epitech.net>
** 
** Started on  Fri Feb 28 21:49:10 2014 
** Last update Fri Feb 28 22:04:55 2014 
*/

#include "sudo.h"

int		check_col(int x, int value, char **map)
{
  int		i;

  i = -1;
  while (++i < 9)
    {
      if (map[x][i] == value)
	return (0);
    }
  return (1);
}

int		check_line(int y, int value, char **map)
{
  int		i;

  i = -1;
  while (++i < 9)
    {
      if (map[i][y] == value)
	return (0);
    }
  return (1);
}

int		check_square(int x, int y, int value, char **map)
{
  int		i;
  int		j;

  i = -1;
  while (++i < 3)
    {
      j = -1;
      while (++j < 3)
	{
	  if (map[x / 3 + i][y / 3 + j] == value)
	    return (0);
	}
    }
  return (1);
}

int		check_all(int x, int y, int value, char **map)
{
  if (check_col(x) == 1 && check_line(y) == 1 &&
      check_square(x, y, value, map) == 1)
    return (1);
  return (0);
}

int		get_value(int x, int y, char **map)
{
  int		i;
  int		correct_value;

  i = '1';
  correct_value = 0;
  while (i <= '9')
    {
      if (check_all(x, y, i, map) == 1)
	{
	  if (correct_value != 0)
	    return (MORE);
	  else
	    correct_value = i;
	}
      ++i;
    }
  return (correct_value);
}
