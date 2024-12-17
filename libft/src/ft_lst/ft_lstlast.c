/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletourn <aletourn@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:16:28 by aletourn          #+#    #+#             */
/*   Updated: 2024/11/07 14:16:29 by aletourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	if (!lst)
		return (NULL);
	current = lst;
	while (current->next)
	{
		current = current->next;
	}
	return (current);
}
/*
int main()
{
    t_list *lst = NULL;
    t_list *new_node;
    t_list *last_node;

    lst = ft_lstnew("Premier");
    new_node = ft_lstnew("Deuxième");
    lst->next = new_node;
    new_node = ft_lstnew("Troisième");
    lst->next->next = new_node;
    new_node = ft_lstnew("Dernier");
    lst->next->next->next = new_node;

    last_node = ft_lstlast(lst);
    if (last_node)
        printf("Contenu du dernier nœud : %s\n", (char *)last_node->content);
    else
        printf("La liste est vide.\n");

    while (lst)
    {
        t_list *temp = lst;
        lst = lst->next;
        free(temp);
    }

    return (0);
}*/
