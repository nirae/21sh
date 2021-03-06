/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_term.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroblin <aroblin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 02:00:55 by aroblin           #+#    #+#             */
/*   Updated: 2019/02/16 03:09:31 by aroblin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_line.h"

static struct termios g_orig_termios;

int		reset_term(void)
{
	tcsetattr(STDIN_FILENO, TCSAFLUSH, &g_orig_termios);
	return (0);
}

int		init_termios(void)
{
	t_shell_data	*data;
	struct termios	term;

	data = shell_data_singleton();
	if (tgetent(NULL, data->term) <= 0)
		return (-1);
	if (tcgetattr(STDIN_FILENO, &g_orig_termios) == -1)
		return (-1);
	else
	{
		term = g_orig_termios;
		term.c_lflag &= ~(ICANON | ECHO | ISIG);
		term.c_cc[VMIN] = 1;
		term.c_cc[VTIME] = 0;
		if (tcsetattr(0, TCSADRAIN, &term) == -1)
			return (-1);
	}
	return (0);
}
