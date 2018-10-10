/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 18:15:32 by sgong             #+#    #+#             */
/*   Updated: 2018/10/09 19:56:35 by sgong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_colle_h.h"

int		comp_ptn22(t_ptn *p, t_ptn *t)
{
	if (p->tl == t->tl && p->tr == t->tr && p->bl == t->bl && p->br == t->br)
		return (1);
	else
		return (0);
}

int		comp_ptn23(t_ptn *p, t_ptn *t)
{
	if (p->tl == t->tl && p->tr == t->tr && p->bl == t->bl && p->br == t->br \
		&& p->ln == t->ln)
		return (1);
	else
		return (0);
}

int		comp_ptn32(t_ptn *p, t_ptn *t)
{
	if (p->tl == t->tl && p->tr == t->tr && p->bl == t->bl && p->br == t->br \
		&& p->tn == t->tn)
		return (1);
	else
		return (0);
}

int		comp_ptn33(t_ptn *p, t_ptn *t)
{
	if (p->tl == t->tl && p->tr == t->tr && p->bl == t->bl && p->br == t->br \
		&& p->tn == t->tn && p->ln == t->ln && p->sp == t->sp)
		return (1);
	else
		return (0);
}
