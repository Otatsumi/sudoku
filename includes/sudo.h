/*
** sudo.h for  in /home/broggi_t/projets/rush2/includes
** 
** Made by 
** Login   <broggi_t@epitech.net>
** 
** Started on  Fri Feb 28 20:31:12 2014 
** Last update Sat Mar  1 02:58:24 2014 
*/

#ifndef SUDO_H_
# define SUDO_H_

# define SUCCESS	0
# define FAILURE	-1
# define MORE		11

# define SEPARATOR	' '
# define SIDE		'|'
# define TOP		'-'
# define LINE_SIZE	20
# define NB_LINES	11

/*
** algo.c
*/
int		algo(char **map);

/*
** check.c
*/
int		check_col(int x, int value, char **map);
int		check_line(int y, int value, char **map);
int		check_square(int x, int y, int value, char **map);
int		check_all(int x, int y, int value, char **map);
int		get_value(int x, int y, char **map);

/*
** display.c
*/
int		display(char **map);

#endif /* !SUDO_H_ */
