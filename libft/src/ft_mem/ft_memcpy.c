/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletourn <aletourn@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:41:34 by aletourn          #+#    #+#             */
/*   Updated: 2024/11/04 13:02:45 by aletourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)dest;
	while (i < n)
	{
		*(char *)str = *(char *)src;
		src++;
		str++;
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "bonjour test tet";
    char	dest[20];

    ft_memcpy(dest, src, 5);

    printf("src: %s\n", src);
    printf("dest: %s\n", dest);

    return (0);
}*/
