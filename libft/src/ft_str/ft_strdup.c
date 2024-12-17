/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletourn <aletourn@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:25:58 by aletourn          #+#    #+#             */
/*   Updated: 2024/11/05 15:30:03 by aletourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strdup(const char *s)
{
	char		*mem;
	size_t		i;

	if (!s)
		return (NULL);
	mem = (char *)malloc((ft_strlen(s) + 1) * sizeof(*s));
	if (!mem)
		return (NULL);
	i = 0;
	while (s[i])
	{
		mem[i] = s[i];
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
/*
int	main(void)
{
	char	src[] = "Bonjour ca va\nCoucou\nrge5g54eg54erg\n\noi";
	char	*c = ft_strdup(src);
	printf("%s\n", c);
	return (0);
}*/
