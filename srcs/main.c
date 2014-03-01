/*
** main.c for  in /home/broggi_t/projets/rush2/srcs
** 
** Made by 
** Login   <broggi_t@epitech.net>
** 
** Started on  Fri Feb 28 20:39:50 2014 
** Last update Sat Mar  1 13:45:43 2014 
*/

#include <stdlib.h>
#include "my_str.h"
#include "sudo.h"

int		main(void)
{
  char		**grid;

  if ((grid = get_grid()) == NULL)
    return (1);
  if (algo(grid) == FAILURE)
    {
      my_puterr(INVALID_GRID);
    }
  display(grid);
  return (0);
}
