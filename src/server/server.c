/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletourn <aletourn@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:42:51 by aletourn          #+#    #+#             */
/*   Updated: 2024/12/17 15:42:52 by aletourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minitalk.h"

static void handler(int sig)
{
	static int bit = 0;
	static char c = 0;

	if (sig == SIGUSR1)
		c |= (1 << (7 - bit));
	else if (sig == SIGUSR2)
		c &= ~(1 << (7 - bit));
	bit++;
	if (bit == 8)
	{
		write(1, &c, 1);
		bit = 0;
		c = 0;
	}
}

int	main(int argc, char **argv)
{
	(void)argv;

	if (argc != 1)
	{
		ft_printf("Usage: ./server\n");
		return (1);
	}
	ft_printf("PID : %d\n", getpid());
	if (signal(SIGUSR1, handler) == SIG_ERR || signal(SIGUSR2, handler) == SIG_ERR)
	{
		ft_printf("Error registering signals\n");
		return (1);
	}
	while (1)
		pause();
	return (0);
}
