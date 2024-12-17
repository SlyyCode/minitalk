/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletourn <aletourn@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:00:40 by aletourn          #+#    #+#             */
/*   Updated: 2024/11/07 14:00:41 by aletourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*current;

	if (!lst)
		return (0);
	count = 0;
	current = lst;
	while (current->next)
	{
		current = current->next;
		count++;
	}
	return (count + 1);
}
/*
int main()
{
    t_list *lst = NULL;
    t_list *new_node;

    lst = ft_lstnew("Premier");
    new_node = ft_lstnew("Deuxième");
    lst->next = new_node;
    new_node = ft_lstnew("Troisième");
    lst->next->next = new_node;

    printf("%d\n", ft_lstsize(lst));

    while (lst)
    {
        t_list *temp = lst;
        lst = lst->next;
        free(temp);
    }

    return (0);
}*/
