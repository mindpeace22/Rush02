/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colle.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 09:50:26 by sgong             #+#    #+#             */
/*   Updated: 2018/10/09 18:35:18 by sgong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle_h.h"

void	ft_prt(int pcode, int x, int y)
{
	if (pcode == -1)
		ft_print1(pcode, x, y);
	else if (pcode == 0)
		ft_print1(pcode, x, y);
	else if (pcode == 1)
		ft_print1(pcode, x, y);
	else if (pcode == 2)
		ft_print2(pcode, x, y);
	else if (pcode == 3)
		ft_print2(pcode, x, y);
	else if (pcode == 4)
		ft_print2(pcode, x, y);
	else if (pcode == 23)
		ft_print23(pcode, x, y);
	else if (pcode == 24)
		ft_print24(pcode, x, y);
	else if (pcode == 34)
		ft_print34(pcode, x, y);
	else if (pcode == 234)
		ft_print234(pcode, x, y);
}

int		ft_get_pcode(t_ptn *t, int x, int y)
{
	if (x == 1 && y == 1)
		return (dect_ptn11(t));
	else if (x == 1 && y == 2)
		return (dect_ptn12(t));
	else if (x == 1 && y >= 3)
		return (dect_ptn13(t));
	else if (x == 2 && y == 1)
		return (dect_ptn21(t));
	else if (x >= 3 && y == 1)
		return (dect_ptn31(t));
	else if (x >= 3 && y == 2)
		return (dect_ptn32(t));
	else if (x == 2 && y >= 3)
		return (dect_ptn23(t));
	else if (x == 2 && y >= 2)
		return (dect_ptn22(t));
	else
		return (dect_ptn33(t));
}

void	ft_print234(int pcode, int x, int y)
{
	char	str[100];

	if (pcode == 234)
	{
		ft_putstr("[colle-02] [");
		ft_putstr(ft_itoa(x, str, 10));
		ft_putstr("] [");
		ft_putstr(ft_itoa(y, str, 10));
		ft_putstr("] || ");
		ft_putstr("[colle-03] [");
		ft_putstr(ft_itoa(x, str, 10));
		ft_putstr("] [");
		ft_putstr(ft_itoa(y, str, 10));
		ft_putstr("] ||");
		ft_putstr("[colle-04] [");
		ft_putstr(ft_itoa(x, str, 10));
		ft_putstr("] [");
		ft_putstr(ft_itoa(y, str, 10));
		ft_putstr("]\n");
	}
}
