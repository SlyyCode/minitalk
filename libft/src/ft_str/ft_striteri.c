/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletourn <aletourn@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:43:29 by aletourn          #+#    #+#             */
/*   Updated: 2024/11/06 14:43:30 by aletourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!(s == NULL || f == NULL))
	{
		i = 0;
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}
/*
void	f(unsigned int i, char *c)
{
	(void)i;
	*c = *c + 1;
}

int	main(void)
{
	char str1[] = "abc";
	ft_striteri(str1, f);
	printf("%s\n", str1);
	return (0);
}*/
