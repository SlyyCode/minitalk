/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletourn <aletourn@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:28:22 by aletourn          #+#    #+#             */
/*   Updated: 2024/11/04 12:34:14 by aletourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = s;
	while (n)
	{
		*str = 0;
		str++;
		n--;
	}
}
/*
int	main(void)
{
	char	str[50] = "efoijefojegoieff";
    
    printf("%s\n", str);
    ft_bzero(str, 5);
    printf("%s\n", str);
    return (0);
	return (0);
}*/
