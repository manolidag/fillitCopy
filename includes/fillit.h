/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgounto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 18:11:10 by emgounto          #+#    #+#             */
/*   Updated: 2018/04/04 01:07:36 by efriedma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include <unistd.h>
# include "../libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct				s_tetro
{
	char					letter;
	int						x[4];
	int						y[4];
	struct t_tetro			*next;
}							t_tetro;

typedef struct				s_map
{
	int						size;
	char					**go;
}							t_map;

void						start(t_tetro *piece, t_map *map);
void						ft_remove(char a, char **map, int size);
void						printmap(char **map, int size);
void						plus_map(t_map *map);
int							isinbounds(t_tetro *piece, int size);
void						freelist(t_tetro *piece);
char						**makemap(int size);
void						ft_read(char *str);
void						ft_usage(char *str);
size_t						ft_totsize(int fp);
void						ft_verify(char **tetro, int size);
void						ft_tetro(char *str, int size);
int							ft_side(char *ptr);
void						ft_error(void);
int							shapevalid(char *ptr);
void						ft_cpybin(char **tetro, int size);
void						locate_points(char **btetro, int size);
int							transform(t_tetro *target, t_map *map, int on);
void						place_tetri(t_tetro *piece, t_map *map);
int							ft_isupper(char a);
void						freemap(char **map, int size);
t_tetro						*make_list(char **tetro, int size);
void						push_all(t_tetro *target);
int							push_y_up(t_tetro *target);
int							push_x_left(t_tetro *target);

#endif
