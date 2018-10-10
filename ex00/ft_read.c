/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 22:14:08 by sgong             #+#    #+#             */
/*   Updated: 2018/10/09 20:44:12 by sgong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include "ft_colle_h.h"

#ifndef BUFF_SIZE
# define BUFF_SIZE 30720
#endif

t_point			*ft_read(int row, int col, int rc)
{
	t_point		*head;
	t_point		*t;
	int			ct;
	char		buf[BUFF_SIZE];

	ct = 0;
	rc = read(0, buf, BUFF_SIZE);
	if (rc <= 0)
		return (0);
	head = ft_create_point(&row, &col, buf[ct++]);
	t = ft_create_point(&row, &col, buf[ct++]);
	head->next = t;
	while (rc > 0)
	{
		while (ct < rc)
		{
			t->next = ft_create_point(&row, &col, buf[ct++]);
			t = t->next;
		}
		rc = read(0, buf, BUFF_SIZE);
		ct = 0;
	}
	return (head);
}

t_point			*ft_create_point(int *row, int *col, char c)
{
	t_point		*temp;

	temp = (t_point *)malloc(sizeof(t_point));
	temp->row = *row;
	temp->col = *col;
	temp->c = c;
	temp->next = 0;
	if (c == '\n')
		*row = *row + 1;
	else
		*col = *col + 1;
	if (c == '\n')
		*col = 1;
	return (temp);
}

void			ft_cal_size(t_point *p, int *x, int *y)
{
	t_point		*t;

	t = p;
	*x = 0;
	*y = 0;
	while (t != 0)
	{
		if (t->row > *y)
			*y = t->row;
		if (t->col > *x)
			*x = t->col;
		t = t->next;
	}
	*x = *x - 1;
}

t_ptn			*ft_create_ptn(void)
{
	t_ptn		*ptn;

	ptn = (t_ptn *)malloc(sizeof(t_ptn));
	ptn->tl = '0';
	ptn->tr = '0';
	ptn->bl = '0';
	ptn->br = '0';
	ptn->tn = '0';
	ptn->ln = '0';
	ptn->sp = '0';
	return (ptn);
}
