/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletourn <aletourn@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:11:21 by aletourn          #+#    #+#             */
/*   Updated: 2024/11/05 15:23:47 by aletourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*mem;
	size_t	total_size;

	if (nelem == 0 || elsize == 0)
		return (malloc(0));
	total_size = nelem * elsize;
	if (total_size / nelem != elsize)
		return (NULL);
	mem = malloc(total_size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, total_size);
	return (mem);
}
/*
int main(void)
{
    int *arr = (int *)ft_calloc(5, sizeof(int));
    
    if (arr == NULL)
        return 1;

    printf("arr[0] = %d\n", arr[0]);
    printf("arr[1] = %d\n", arr[1]);
    printf("arr[2] = %d\n", arr[2]);
    printf("arr[3] = %d\n", arr[3]);
    printf("arr[4] = %d\n", arr[4]);

    free(arr);
    return (0);
}*/
