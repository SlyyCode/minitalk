/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletourn <aletourn@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:02:41 by aletourn          #+#    #+#             */
/*   Updated: 2024/11/04 15:02:43 by aletourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
	{
		if (*str == (unsigned char)c)
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}
/*
int	main(void)
{
	//char ch[] = "coucou comment ca va";
	printf("%p\n", ft_memchr("coucou comment ca va", 'o', 5));
	return (0);
}*/
