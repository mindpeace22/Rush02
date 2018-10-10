/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 20:33:37 by sgong             #+#    #+#             */
/*   Updated: 2018/10/09 20:38:27 by sgong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle_h.h"
#include <stdlib.h>

int		main(void)
{
	t_point	*point;
	t_ptn	*ptn;
	int		x;
	int		y;
	int		pcode;

	pcode = -1;
	point = ft_read(1, 1, 0);
	ft_cal_size(point, &x, &y);
	if (point <= 0 || point->c == '\n')
	{
		ft_print1(-1, 1, 1);
		return (0);
	}
	ptn = ft_get_ptn(point, x, y);
	pcode = ft_get_pcode(ptn, x, y);
	ft_prt(pcode, x, y);
	free(point);
	free(ptn);
	return (0);
}
