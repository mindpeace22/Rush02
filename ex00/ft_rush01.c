/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 18:13:55 by sgong             #+#    #+#             */
/*   Updated: 2018/10/09 19:51:50 by sgong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_colle_h.h"

t_ptn		g_p00 = {'o', 'o', 'o', 'o', '-', '|', ' '};
t_ptn		g_p01 = {'/', '\\', '\\', '/', '*', '*', ' '};
t_ptn		g_p02 = {'A', 'A', 'C', 'C', 'B', 'B', ' '};
t_ptn		g_p03 = {'A', 'C', 'A', 'C', 'B', 'B', ' '};
t_ptn		g_p04 = {'A', 'C', 'C', 'A', 'B', 'B', ' '};

int		dect_ptn32(t_ptn *ptn)
{
	if (comp_ptn32(ptn, &g_p00) == 1)
		return (0);
	else if (comp_ptn32(ptn, &g_p01) == 1)
		return (1);
	else if (comp_ptn32(ptn, &g_p02) == 1)
		return (2);
	else if (comp_ptn32(ptn, &g_p03) == 1)
		return (3);
	else if (comp_ptn32(ptn, &g_p04) == 1)
		return (4);
	else
		return (-1);
}

int		dect_ptn23(t_ptn *ptn)
{
	if (comp_ptn23(ptn, &g_p00) == 1)
		return (0);
	else if (comp_ptn23(ptn, &g_p01) == 1)
		return (1);
	else if (comp_ptn23(ptn, &g_p02) == 1)
		return (2);
	else if (comp_ptn23(ptn, &g_p03) == 1)
		return (3);
	else if (comp_ptn23(ptn, &g_p04) == 1)
		return (4);
	else
		return (-1);
}

int		dect_ptn22(t_ptn *ptn)
{
	if (comp_ptn22(ptn, &g_p00) == 1)
		return (0);
	else if (comp_ptn22(ptn, &g_p01) == 1)
		return (1);
	else if (comp_ptn22(ptn, &g_p02) == 1)
		return (2);
	else if (comp_ptn22(ptn, &g_p03) == 1)
		return (3);
	else if (comp_ptn22(ptn, &g_p04) == 1)
		return (4);
	else
		return (-1);
}

int		dect_ptn33(t_ptn *ptn)
{
	if (comp_ptn33(ptn, &g_p00) == 1)
		return (0);
	else if (comp_ptn33(ptn, &g_p01) == 1)
		return (1);
	else if (comp_ptn33(ptn, &g_p02) == 1)
		return (2);
	else if (comp_ptn33(ptn, &g_p03) == 1)
		return (3);
	else if (comp_ptn33(ptn, &g_p04) == 1)
		return (4);
	else
		return (-1);
}
