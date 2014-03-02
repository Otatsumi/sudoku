/*
** main2.c for  in /home/bauwen_j/test/sudoku
** 
** Made by bauwens
** Login   <bauwen_j@epitech.net>
** 
** Started on  Sun Mar  2 19:16:39 2014 bauwens
** Last update Sun Mar  2 19:22:08 2014 bauwens
*/

#include <stdlib.h>
#include "my_str.h"
#include "sudo.h"

int		main(void)
{
  char		**grid;;
  while ((grid = get_grid()) != NULL)
    {
      if (algo(grid) == FAILURE)
	my_puterr(INVALID_GRID);
      display(grid);
    }
  return (0);
}
