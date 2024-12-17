/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletourn <aletourn@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:05:58 by aletourn          #+#    #+#             */
/*   Updated: 2024/11/07 15:05:59 by aletourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	if (lst || f)
	{
		current = lst;
		while (current)
		{
			f(current->content);
			current = current->next;
		}
	}
}
/*
void ft_toupper_wrapper(void *c)
{
    char *ch = (char *)c;
    *ch = ft_toupper(*ch);
}

void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%s -> ", (char *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

int	main(void)
{
	t_list *list = NULL;

    ft_lstadd_back(&list, ft_lstnew(ft_strdup("hello")));
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("world")));
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("test")));

    printf("Original list: ");
    print_list(list);

    ft_lstiter(list, ft_toupper_wrapper);

    printf("List after ft_lstiter: ");
    print_list(list);

    return 0;
}*/
