/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush0x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 18:27:29 by sgong             #+#    #+#             */
/*   Updated: 2018/10/09 20:12:32 by sgong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle_h.h"

int		ft_get_corner(t_point **q, t_ptn **t, int x, int y)
{
	if ((*q)->col == 1 && (*q)->row == 1)
	{
		(*t)->tl = (*q)->c;
		return (1);
	}
	else if ((*q)->col == 1 && (*q)->row == y)
	{
		(*t)->bl = (*q)->c;
		return (1);
	}
	else if ((*q)->col == x && (*q)->row == 1)
	{
		(*t)->tr = (*q)->c;
		return (1);
	}
	else if ((*q)->col == x && (*q)->row == y)
	{
		(*t)->br = (*q)->c;
		return (1);
	}
	else
		return (ft_get_tn(q, t, x, y));
}

int		ft_get_tn(t_point **q, t_ptn **t, int x, int y)
{
	if (x >= 3 && ((*q)->row == 1 || (*q)->row == y) && (*q)->col > 1 \
		&& (*q)->col < x)
	{
		if ((*q)->col == 2)
		{
			(*t)->tn = (*q)->c;
			return (1);
		}
		else if ((*q)->c != (*t)->tn)
		{
			(*t)->tn = '#';
			return (0);
		}
		else
			return (1);
	}
	else
		return (ft_get_ln(q, t, x, y));
}

int		ft_get_ln(t_point **q, t_ptn **t, int x, int y)
{
	if (y >= 3 && ((*q)->col == 1 || (*q)->col == x) && (*q)->row > 1 \
		&& (*q)->row < y)
	{
		if ((*q)->row == 2)
		{
			(*t)->ln = (*q)->c;
			return (1);
		}
		else if ((*q)->c != (*t)->ln)
		{
			(*t)->ln = '#';
			return (0);
		}
		else
			return (1);
	}
	else
		return (ft_get_sp(q, t, x, y));
}

int		ft_get_sp(t_point **q, t_ptn **t, int x, int y)
{
	if (x >= 3 && y >= 3 && (*q)->col > 1 && (*q)->col < x \
		&& (*q)->row > 1 && (*q)->row < y)
	{
		if ((*q)->row == 2)
		{
			(*t)->sp = (*q)->c;
			return (1);
		}
		else if ((*q)->c != (*t)->sp)
		{
			(*t)->sp = '#';
			return (0);
		}
		else
			return (1);
	}
	else
		return (1);
}

t_ptn	*ft_get_ptn(t_point *p, int x, int y)
{
	t_ptn	*t;
	t_point	*q;
	int		b;

	t = ft_create_ptn();
	q = p;
	b = 0;
	while (q != 0)
	{
		b = ft_get_corner(&q, &t, x, y);
		if (b == 0)
			break ;
		q = q->next;
	}
	return (t);
}
