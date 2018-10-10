/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colle_h.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 19:35:36 by sgong             #+#    #+#             */
/*   Updated: 2018/10/09 20:32:20 by sgong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_COLLE_H_H
# define FT_COLLE_H_H

typedef struct		s_point
{
	int				row;
	int				col;
	char			c;
	struct s_point	*next;
}					t_point;

typedef	struct		s_pattern
{
	char			tl;
	char			tr;
	char			bl;
	char			br;

	char			tn;
	char			ln;

	char			sp;
}					t_ptn;

t_point				*ft_create_point(int *row, int *col, char c);
t_point				*ft_read(int row, int col, int rc);
void				ft_cal_size(t_point *p, int *x, int *y);
void				ft_swap(int *a, int *b);
int					ft_strlen(char *str);

void				ft_reverse(char *str, int str_len);
char				*ft_itoa(int num, char *str, int base);

void				ft_putchar(char c);
int					ft_atoi(char *str);
void				ft_putstr(char *str);
void				ft_print234(int pcode, int x, int y);
void				ft_print1(int pcode, int x, int y);

void				ft_print2(int pcode, int x, int y);
void				ft_print23(int pcode, int x, int y);
void				ft_print24(int pcode, int x, int y);
void				ft_print34(int pcode, int x, int y);
void				ft_prt(int pcode, int x, int y);

int					dect_ptn11(t_ptn *ptn);
int					dect_ptn12(t_ptn *ptn);
int					dect_ptn13(t_ptn *ptn);
int					dect_ptn21(t_ptn *ptn);

int					dect_ptn31(t_ptn *ptn);
int					dect_ptn32(t_ptn *ptn);
int					dect_ptn23(t_ptn *ptn);
int					dect_ptn22(t_ptn *ptn);
int					dect_ptn33(t_ptn *ptn);

int					comp_ptn11(t_ptn *p, t_ptn *t);
int					comp_ptn12(t_ptn *p, t_ptn *t);
int					comp_ptn13(t_ptn *p, t_ptn *t);
int					comp_ptn21(t_ptn *p, t_ptn *t);
int					comp_ptn31(t_ptn *p, t_ptn *t);

int					comp_ptn32(t_ptn *p, t_ptn *t);
int					comp_ptn23(t_ptn *p, t_ptn *t);
int					comp_ptn22(t_ptn *p, t_ptn *t);
int					comp_ptn33(t_ptn *p, t_ptn *t);

int					ft_get_tn(t_point **q, t_ptn **t, int x, int y);
int					ft_get_ln(t_point **q, t_ptn **t, int x, int y);
int					ft_get_corner(t_point **q, t_ptn **t, int x, int y);
int					ft_get_sp(t_point **q, t_ptn **t, int x, int y);

int					ft_get_ln(t_point **q, t_ptn **t, int x, int y);
int					ft_get_pcode(t_ptn *t, int x, int y);
t_ptn				*ft_get_ptn(t_point *p, int x, int y);
t_ptn				*ft_create_ptn(void);

#endif
