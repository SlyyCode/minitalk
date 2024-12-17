/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletourn <aletourn@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:02:52 by aletourn          #+#    #+#             */
/*   Updated: 2024/11/04 15:02:56 by aletourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str;
	unsigned char	*str2;

	str = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n--)
	{
		if (*str != *str2)
			return (*str - *str2);
		str++;
		str2++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_memcmp("a", "e", 10));
	printf("%d\n", ft_memcmp("bonjour", "bonjour", 10));
	printf("%d\n", ft_memcmp("e", "a", 10));
	return (0);
}*/
