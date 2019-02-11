/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_env_var.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroblin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 02:43:04 by aroblin           #+#    #+#             */
/*   Updated: 2019/02/07 02:44:01 by aroblin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "21sh.h"

char		*get_env_var(char *name) // enlever static)
{
	t_varenv		*var;
	char			*content;
	t_shell_data	*data;

	data = shell_data_singleton();
	var = get_env_var_by_name(&data->intern_env_lst, name);
	if (var)
		content = ft_strdup(var->content);
	else
		return (NULL);
	if (!content)
		quit_shell(EXIT_FAILURE, MALLOC_ERR);
	return (content);
}
