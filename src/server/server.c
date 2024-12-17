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

static void	handler(int sig)
{
	static int	bit;
	static char	c;

	bit = 0;
	c = 0;
	ft_printf("receive %d", sig);
	if (sig == SIGUSR1)
		c |= (1 << (7 - bit));
	
	if (++bit == 8)
	{
		ft_putchar_fd(c, 1);
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
	if (signal(SIGUSR1, handler) == SIG_ERR)
	{
		ft_printf("Error registering SIGUSR1 signal\n");
		return (1);
	}
	if (signal(SIGUSR2, handler) == SIG_ERR)
	{
		ft_printf("Error registering SIGUSR2 signal\n");
		return (1);
	}
	while (1)
		pause();
	return (0);
}
