/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletourn <aletourn@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:32:21 by aletourn          #+#    #+#             */
/*   Updated: 2024/11/06 15:32:24 by aletourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	char	*str;
	int		len;

	str = ft_itoa(n);
	len = ft_strlen(str);
	ft_putstr_fd(str, fd);
	free(str);
	return (len);
}
/*
int main(void)
{
	ft_putnbr_fd(1424, 1);
}*/
