/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletourn <aletourn@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:03:14 by aletourn          #+#    #+#             */
/*   Updated: 2024/11/04 15:03:15 by aletourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	is_white_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v')
		return (1);
	if (c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int			i;
	int			signe;
	long long	resultat;

	i = 0;
	signe = 1;
	resultat = 0;
	while (is_white_space(nptr[i]))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			signe = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		resultat = resultat * 10 + (nptr[i] - '0');
		if (resultat > 2147483647 && signe == 1)
			return (2147483647);
		if (resultat > 2147483648 && signe == -1)
			return (-2147483648);
		i++;
	}
	return ((int)(resultat * signe));
}
/*
int	main(void)
{
	char	ch[] = "  ---+--+1235";
	printf("%d\n", ft_atoi(ch));
	return (0);
}*/
