/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_key.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroblin <aroblin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 04:25:51 by aroblin           #+#    #+#             */
/*   Updated: 2019/02/13 00:24:49 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_line.h"

/*
**	SET_CMD_EDIT / SET_CMD_HIS / SET_CMD_MOUV
**
**	params: cmd -> command that will compare
**
**	return: pointer to the good fonction in terms of keycode
**
**	Description:
**	- compare cmd with maccro of keycode print
**	- return the good pointer
*/

void	*set_cmd_edit(char *cmd)
{
	if (cmd[0] == -30 && cmd[1] == -120 && cmd[2] == -102)
		return (&paste);
	else if (cmd[0] == 27 && cmd[1] == 91 && cmd[2] == 51 && cmd[3] == 126)
		return (&del);
	else if (cmd[0] == -61 && cmd[1] == -97)
		return (&selec);
	else if (cmd[0] == 127)
		return (&supp);
	return (NULL);
}

void	*set_cmd_mouv(char *cmd)
{
	if (cmd[0] == 27 && cmd[1] == 91 && cmd[2] == 68)
		return (&ft_left);
	else if (cmd[0] == 27 && cmd[1] == 91 && cmd[2] == 67)
		return (&ft_right);
	else if (cmd[0] == 27 && cmd[1] == 91 && cmd[2] == 72)
		return (&cur_begin_line);
	else if (cmd[0] == 27 && cmd[1] == 91 && cmd[2] == 70)
		return (&cur_end_line);
	else if (cmd[0] == 27 && cmd[1] == 91 && cmd[2] == 49
		&& cmd[3] == 59 && cmd[4] == 50 && cmd[5] == 67)
		return (&word_right);
	else if (cmd[0] == 27 && cmd[1] == 91 && cmd[2] == 49
		&& cmd[3] == 59 && cmd[4] == 50 && cmd[5] == 68)
		return (&word_left);
	else if (cmd[0] == 27 && cmd[1] == 91 && cmd[2] == 49
		&& cmd[3] == 59 && cmd[4] == 50 && cmd[5] == 65)
		return (&multi_up);
	else if (cmd[0] == 27 && cmd[1] == 91 && cmd[2] == 49
		&& cmd[3] == 59 && cmd[4] == 50 && cmd[5] == 66)
		return (&multi_down);
	return (NULL);
}

void	*set_cmd_his(char *cmd)
{
	if (cmd[0] == 27 && cmd[1] == 91 && cmd[2] == 65)
		return (&history_up);
	else if (cmd[0] == 27 && cmd[1] == 91 && cmd[2] == 66)
		return (&history_down);
	return (NULL);
}
