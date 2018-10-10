/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 18:14:17 by sgong             #+#    #+#             */
/*   Updated: 2018/10/09 18:15:20 by sgong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_colle_h.h"

int		comp_ptn11(t_ptn *p, t_ptn *t)
{
	if (p->tl == t->tl)
		return (1);
	else
		return (0);
}

int		comp_ptn12(t_ptn *p, t_ptn *t)
{
	if (p->tl == t->tl && p->bl == t->bl)
		return (1);
	else
		return (0);
}

int		comp_ptn13(t_ptn *p, t_ptn *t)
{
	if (p->tl == t->tl && p->ln == t->ln && p->bl == t->bl)
		return (1);
	else
		return (0);
}

int		comp_ptn21(t_ptn *p, t_ptn *t)
{
	if (p->tl == t->tl && p->tr == t->tr)
		return (1);
	else
		return (0);
}

int		comp_ptn31(t_ptn *p, t_ptn *t)
{
	if (p->tl == t->tl && p->tn == t->tn && p->tr == t->tr)
		return (1);
	else
		return (0);
}
