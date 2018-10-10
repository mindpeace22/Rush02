/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 18:11:19 by sgong             #+#    #+#             */
/*   Updated: 2018/10/09 19:52:54 by sgong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_colle_h.h"

t_ptn		g_p10 = {'o', 'o', 'o', 'o', '-', '|', ' '};
t_ptn		g_p11 = {'/', '\\', '\\', '/', '*', '*', ' '};
t_ptn		g_p12 = {'A', 'A', 'C', 'C', 'B', 'B', ' '};
t_ptn		g_p13 = {'A', 'C', 'A', 'C', 'B', 'B', ' '};

int		dect_ptn11(t_ptn *ptn)
{
	if (comp_ptn11(ptn, &g_p10) == 1)
		return (0);
	else if (comp_ptn11(ptn, &g_p11) == 1)
		return (1);
	else if (comp_ptn11(ptn, &g_p12) == 1)
		return (234);
	else
		return (-1);
}

int		dect_ptn12(t_ptn *ptn)
{
	if (comp_ptn12(ptn, &g_p10) == 1)
		return (0);
	else if (comp_ptn12(ptn, &g_p11) == 1)
		return (1);
	else if (comp_ptn12(ptn, &g_p13) == 1)
		return (3);
	else if (comp_ptn12(ptn, &g_p12) == 1)
		return (24);
	else
		return (-1);
}

int		dect_ptn13(t_ptn *ptn)
{
	if (comp_ptn13(ptn, &g_p10) == 1)
		return (0);
	else if (comp_ptn13(ptn, &g_p11) == 1)
		return (1);
	else if (comp_ptn13(ptn, &g_p13) == 1)
		return (3);
	else if (comp_ptn13(ptn, &g_p12) == 1)
		return (24);
	else
		return (-1);
}

int		dect_ptn21(t_ptn *ptn)
{
	if (comp_ptn21(ptn, &g_p10) == 1)
		return (0);
	else if (comp_ptn21(ptn, &g_p11) == 1)
		return (1);
	else if (comp_ptn21(ptn, &g_p13) == 1)
		return (34);
	else if (comp_ptn21(ptn, &g_p12) == 1)
		return (2);
	else
		return (-1);
}

int		dect_ptn31(t_ptn *ptn)
{
	if (comp_ptn31(ptn, &g_p10) == 1)
		return (0);
	else if (comp_ptn31(ptn, &g_p11) == 1)
		return (1);
	else if (comp_ptn31(ptn, &g_p13) == 1)
		return (34);
	else if (comp_ptn31(ptn, &g_p12) == 1)
		return (2);
	else
		return (-1);
}
