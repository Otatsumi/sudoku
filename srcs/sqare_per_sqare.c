/*
** sqare_per_sqare.c for  in /home/bauwen_j/test/sudoku/srcs
** 
** Made by bauwens
** Login   <bauwen_j@epitech.net>
** 
** Started on  Sat Mar  1 16:10:35 2014 bauwens
** Last update Sat Mar  1 16:14:32 2014 bauwens
*/

char	**in_sqare(char **map, char **tab, int x, int y)
{
  int	val;

  val = '1';
  while (val != '9' + 1)
    {
      
      val++;
    }
}

char	**new_sqare(char **map, int x, int y)
{
  char	tab[3][3];
  int	i;
  int	j;
  int	k;

  k = y;
  i = 0;
  while (map[x] != 0)
    {
      j = 0;
      y = k;
      while (map[x][y] != 0)
	{
	  tab[i][j] = map[x][y];
	  j++;
	  y++;
	}
      x++;
      i++;
    }
  map = in_sqare(map, tab, x - 3, y - 3);
  return (map);
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
	  map = new_sqare(map, i, j);
	  j += 3;
	}
      i += 3;
    }
  return (map);
}
