/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 11:46:14 by sgong             #+#    #+#             */
/*   Updated: 2018/10/06 19:00:09 by sgong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush_h.h"

void	rush04(int x, int y)
{
	int		i;
	int		j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if ((((x == 1) && (y > 1)) || ((y == 1) && (x > 1))) && \
				((i == y) && (j == x)))
				ft_putchar('C');
			else if (((i == 1) && (j == 1)) || ((i == y) && (j == x)))
				ft_putchar('A');
			else if (((i == 1) && (j == x)) || ((j == 1) && (i == y)))
				ft_putchar('C');
			else if ((i == 1) || (j == 1) || (i == y) || (j == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		main(int ac, char **av)
{
	int		col;
	int		row;

	if (ac != 3)
		return (0);
	else
	{
		col = ft_atoi(av[1]);
		row = ft_atoi(av[2]);
		if (col <= 0 || row <= 0)
			return (0);
		else
		{
			rush04(col, row);
		}
	}
	return (0);
}
