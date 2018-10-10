/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 11:35:57 by sgong             #+#    #+#             */
/*   Updated: 2018/10/09 20:00:51 by sgong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle_h.h"

void	ft_print1(int pcode, int x, int y)
{
	char	str[100];

	if (pcode == -1)
		ft_putstr("Pattern is not found!\n");
	else if (pcode == 0)
	{
		ft_putstr("[rush-00] [");
		ft_putstr(ft_itoa(x, str, 10));
		ft_putstr("] [");
		ft_putstr(ft_itoa(y, str, 10));
		ft_putstr("]\n");
	}
	else if (pcode == 1)
	{
		ft_putstr("[rush-01] [");
		ft_putstr(ft_itoa(x, str, 10));
		ft_putstr("] [");
		ft_putstr(ft_itoa(y, str, 10));
		ft_putstr("]\n");
	}
}

void	ft_print2(int pcode, int x, int y)
{
	char	str[100];

	if (pcode == 2)
		ft_putstr("[rush-02] [");
	else if (pcode == 3)
		ft_putstr("[rush-03] [");
	else if (pcode == 4)
		ft_putstr("[rush-04] [");
	ft_putstr(ft_itoa(x, str, 10));
	ft_putstr("] [");
	ft_putstr(ft_itoa(y, str, 10));
	ft_putstr("]\n");
}

void	ft_print23(int pcode, int x, int y)
{
	char	str[100];

	if (pcode == 23)
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
		ft_putstr("]\n");
	}
}

void	ft_print24(int pcode, int x, int y)
{
	char	str[100];

	if (pcode == 24)
	{
		ft_putstr("[colle-02] [");
		ft_putstr(ft_itoa(x, str, 10));
		ft_putstr("] [");
		ft_putstr(ft_itoa(y, str, 10));
		ft_putstr("] || ");
		ft_putstr("[colle-04] [");
		ft_putstr(ft_itoa(x, str, 10));
		ft_putstr("] [");
		ft_putstr(ft_itoa(y, str, 10));
		ft_putstr("]\n");
	}
}

void	ft_print34(int pcode, int x, int y)
{
	char	str[100];

	if (pcode == 34)
	{
		ft_putstr("[colle-03] [");
		ft_putstr(ft_itoa(x, str, 10));
		ft_putstr("] [");
		ft_putstr(ft_itoa(y, str, 10));
		ft_putstr("] || ");
		ft_putstr("[colle-04] [");
		ft_putstr(ft_itoa(x, str, 10));
		ft_putstr("] [");
		ft_putstr(ft_itoa(y, str, 10));
		ft_putstr("]\n");
	}
}
