/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletourn <aletourn@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:14:30 by aletourn          #+#    #+#             */
/*   Updated: 2024/11/04 13:29:48 by aletourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dest;
	s = (char *)src;
	if (d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else if (d > s)
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char src1[] = "bonjour cava";
	char dest1[20];
	char src2[] = "je chevauche";

	printf("dest1: '%s'\n", dest1);
	ft_memmove(dest1, src1, ft_strlen(src1) + 1);
	printf("dest1: '%s'\n", dest1);

	printf("src2: '%s'\n", src2);
	ft_memmove(src2 + 6, src2, 6);
	printf("src2: '%s'\n", src2);
	return (0);
}*/
