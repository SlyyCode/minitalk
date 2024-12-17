/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletourn <aletourn@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:18:31 by aletourn          #+#    #+#             */
/*   Updated: 2024/11/06 15:18:32 by aletourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	while (*s)
		write(fd, &*s++, 1);
	return (ft_strlen(s));
}
/*
int main(void)
{
	ft_putstr_fd("bonjouuur  p ", 1);
}*/
