/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   home_end.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroblin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 02:18:03 by aroblin           #+#    #+#             */
/*   Updated: 2019/02/16 02:36:53 by aroblin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_line.h"

void	cur_begin_line(t_term **t)
{
	if ((*t)->cur.x > 0)
	{
		while (1)
		{
			if ((*t)->cur.x <= 0)
				break ;
			ft_left(t);
		}
	}
}

void	cur_end_line(t_term **t)
{
	if ((*t)->cur.x < (*t)->max_cur)
	{
		while (1)
		{
			if ((*t)->cur.x >= (*t)->max_cur)
				break ;
			ft_right(t);
		}
	}
}
