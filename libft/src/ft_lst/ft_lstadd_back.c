/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletourn <aletourn@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:29:13 by aletourn          #+#    #+#             */
/*   Updated: 2024/11/07 14:29:14 by aletourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!(lst == NULL || new == NULL))
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			last = ft_lstlast(*lst);
			last->next = new;
		}
	}
}
/*
int main()
{
    t_list *lst = NULL;
    t_list *new_node;

    lst = ft_lstnew("Premier");
    ft_lstadd_back(&lst, ft_lstnew("Deuxième"));
    ft_lstadd_back(&lst, ft_lstnew("Troisième"));
    new_node = ft_lstnew("Nouveau dernier");
    ft_lstadd_back(&lst, new_node);

    while (lst)
    {
        t_list *temp = lst;
        lst = lst->next;
        free(temp);
    }

    return 0;
}*/
