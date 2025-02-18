/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletourn <aletourn@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:42:46 by aletourn          #+#    #+#             */
/*   Updated: 2024/12/17 15:42:47 by aletourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"

static void	send_char(int pid, char c)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if ((c & (0x01 << bit)) != 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(1000);
		bit++;
	}
}

void	send_message(int pid, char *message)
{
	while (*message)
	{
		send_char(pid, *message);
		message++;
	}
	send_char(pid, '\0');
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_printf("Usage: ./client [server_pid] [message]\n");
		return (1);
	}
	send_message(ft_atoi(argv[1]), argv[2]);
	return (0);
}
