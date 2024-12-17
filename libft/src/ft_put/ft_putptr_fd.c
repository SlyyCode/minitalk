/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletourn <aletourn@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:23:56 by aletourn          #+#    #+#             */
/*   Updated: 2024/11/20 14:23:57 by aletourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_putptr_fd(void *ptr, int fd)
{
	unsigned long long	addr;
	int					count;

	addr = (unsigned long long)ptr;
	count = 0;
	if (!ptr)
	{
		count += ft_putstr_fd("(nil)", fd);
		return (count);
	}
	count += ft_putstr_fd("0x", fd);
	count += ft_puthex_fd(addr, 0, fd);
	return (count);
}
