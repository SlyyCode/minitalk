/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletourn <aletourn@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:56:35 by aletourn          #+#    #+#             */
/*   Updated: 2024/11/04 11:09:49 by aletourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
int	main(void)
{
	printf("%d\n", ft_isascii('f'));
	printf("%d\n", ft_isascii('4'));
	printf("%d\n", ft_isascii('/'));
	printf("%d\n", ft_isprint('\n'));
	return (0);
}*/
