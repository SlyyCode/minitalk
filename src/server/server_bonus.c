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

	if (sig == SIGUSR1)
		c |= (0x01 << bit);
	bit++;
	if (bit == 8)
	{
		ft_printf("%c", c);
		bit = 0;
		c = 0;
		ft_printf("%i", getppid());
	}
}

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc != 1)
	{
		ft_printf("Usage: ./server_bonus\n");
		return (1);
	}
	ft_printf("BONUS\n");
	ft_printf("PID : %d\n", getpid());
	if (signal(SIGUSR1, handler) == SIG_ERR
		|| signal(SIGUSR2, handler) == SIG_ERR)
	{
		ft_printf("Error registering signals\n");
		return (1);
	}
	while (1)
		pause();
	return (0);
}
