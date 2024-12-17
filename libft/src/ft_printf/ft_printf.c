/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletourn <aletourn@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:21:30 by aletourn          #+#    #+#             */
/*   Updated: 2024/11/19 19:21:32 by aletourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_format(va_list args, const char str)
{
	int	count;

	count = 0;
	if (str == 'd' || str == 'i')
		count += ft_putnbr_fd(va_arg(args, int), 1);
	else if (str == 's')
		count += ft_putstr_fd(va_arg(args, char *), 1);
	else if (str == 'c')
		count += ft_putchar_fd(va_arg(args, int), 1);
	else if (str == 'u')
		count += ft_putnbr_unsigned_fd(va_arg(args, unsigned int), 1);
	else if (str == 'x' || str == 'X')
		count += ft_puthex_fd(va_arg(args, unsigned int), str == 'X', 1);
	else if (str == 'p')
		count += ft_putptr_fd(va_arg(args, void *), 1);
	else if (str == '%')
		count += ft_putchar_fd('%', 1);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list		args;
	int			count;
	int			i;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			count += ft_format(args, str[i + 1]);
			i++;
		}
		else
			count += ft_putchar_fd(str[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
