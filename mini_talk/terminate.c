/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   terminate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 19:06:22 by ioleinik          #+#    #+#             */
/*   Updated: 2021/07/10 23:14:58 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	terminate(int pid)
{
	static int	i = 0;

	if (i < 8)
	{
		kill(pid, SIGUSR2);
		i++;
	}
	else
		i = 0;
}
