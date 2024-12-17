/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletourn <aletourn@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:02:17 by aletourn          #+#    #+#             */
/*   Updated: 2024/11/04 15:07:20 by aletourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last;

	i = 0;
	last = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			last = (char *)&s[i];
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (last);
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
