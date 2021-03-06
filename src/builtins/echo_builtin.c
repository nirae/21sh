/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo_builtin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 00:36:16 by ndubouil          #+#    #+#             */
/*   Updated: 2019/02/09 05:55:29 by aroblin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sh21.h"

static int		set_options(char *ops, int *options, int pos)
{
	if (ops[pos] == '\0')
		return (FALSE);
	if (is_valid_option(ops[pos], OPTIONS_ECHO))
		*(options) |= (1 << (ops[pos] - 'a'));
	set_options(ops, options, (pos + 1));
	return (TRUE);
}

int				echo_builtin(char **args)
{
	int	options;
	int	z;
	int	pos_args;

	pos_args = 0;
	options = 0;
	options_parser(args, &options, &pos_args, set_options);
	z = (pos_args - 1);
	if (z < 0 && (options & OPT_N))
		z = 1;
	else if (z < 0)
		z = 0;
	while (args[1 + z])
	{
		ft_printf("%s", args[1 + z]);
		z++;
		if (args[1 + z])
			write(1, " ", 1);
	}
	if (!(options & OPT_N))
		write(1, "\n", 1);
	return (EXIT_SUCCESS);
}
