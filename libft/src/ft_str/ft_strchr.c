/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletourn <aletourn@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:02:10 by aletourn          #+#    #+#             */
/*   Updated: 2024/11/04 15:06:18 by aletourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (0);
	while (*s != '\0')
	{
		if ((unsigned char)*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (0);
}
/*
int	main(void)
{
	char ch[] = "bonjour tesstt";
	printf("%s\n", ft_strchr(ch, 'r'));
	char ch2[] = "coucouue";
	printf("%s\n", ft_strchr(ch2, '\0'));
	return (0);
}*/
