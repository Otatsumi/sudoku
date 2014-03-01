/*
** sqare_per_sqare.c for  in /home/bauwen_j/test/sudoku/srcs
** 
** Made by bauwens
** Login   <bauwen_j@epitech.net>
** 
** Started on  Sat Mar  1 16:10:35 2014 bauwens
** Last update Sat Mar  1 18:14:35 2014 bauwens
*/

int	check_in_square(int x, int y, int val, char **map)
{
  int	pos;
  int	sol;
  int	i;
  int	j;

  i = x + 3;
  j = y + 3;
  sol = 0;
  while (x < i && sol < 2)
    {
      y = j - 3;
      while (y < j && sol < 2)
	{
	  if (map[x][y] == MORE || map[x][y] == 0)
	    {
	      if (check_line (x, val, map) == 1 && check_col(y, val, map) == 1)
		if (sol == 0)
		  {
		    pos = x * 10 + y;
		    sol++;
		  }
		else
		  return (-1);
	    }
	  y++
	}
    }
  return (pos);
}

char	**in_square(char **map, int x, int y)
{
  int	pos;
  int	val;

  val = '1';
  while (val <= 9)
    {
      if (check_square(x, y, val, map) == 1)
	{
	  if ((pos = check_in_square(x, y, val, map)) != -1)
	    map[pos / 10][pos % 10] = val;
	}
      val++;
    }
  return (map)
}

char	**check_per_square(char **map)
{
  int	i;
  int	j;

  i = 0;
  while (i < 9)
    {
      j = 0;
      while (j < 9)
	{
	  map = in_square(map, i, j);
	  j += 3;
	}
      i += 3;
    }
  return (map);
}
