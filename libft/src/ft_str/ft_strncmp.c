/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletourn <aletourn@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:02:29 by aletourn          #+#    #+#             */
/*   Updated: 2024/11/04 15:02:30 by aletourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	c;
	size_t	i;

	c = 0;
	i = 0;
	while (s1[c] == s2[c] && s1[c] != '\0' && s2[c] != '\0' && i < n)
	{
		c++;
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (s1[c] - s2[c]);
}
/*
int	main(void)
{
	const char	str[] = "bonjour";
	const char	str2[] = "bonnjou";
	printf("%d\n", ft_strncmp(str, str2, 6));
	//printf("%d\n", strncmp(str, str2, 6));
	return (0);
}*/
