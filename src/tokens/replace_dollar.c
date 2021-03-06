/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_dollar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroblin <aroblin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 02:35:39 by aroblin           #+#    #+#             */
/*   Updated: 2019/02/15 05:26:58 by aroblin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sh21.h"

void	replace_dollar(char **arr, char **final)
{
	int		i;
	char	*tmp;

	tmp = NULL;
	i = 0;
	while (arr[i] != NULL)
	{
		tmp = get_env_var(arr[i]);
		if (!(*final) && tmp)
			*final = ft_strdup(tmp);
		else if (!(*final) && !(tmp))
			*final = ft_strdup(arr[i]);
		else if (tmp)
			*final = ft_strjoin_free_s1(final, &tmp);
		else
			*final = ft_strjoin_free_s1(final, &arr[i]);
		ft_strdel(&tmp);
		if (ft_strlen(*final) > 4096)
		{
			ft_printf("21sh : command substitution interrupted");
			ft_printf(" : argument too long\n");
			break ;
		}
		i++;
	}
}
