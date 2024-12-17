/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletourn <aletourn@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:06:06 by aletourn          #+#    #+#             */
/*   Updated: 2024/11/07 15:06:07 by aletourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*
void *ft_toupper_wrapper(void *c)
{
    char *str = (char *)c;
    char *new_str = strdup(str);
    if (!new_str)
        return NULL;
    
    for (int i = 0; new_str[i]; i++)
    {
        new_str[i] = ft_toupper(new_str[i]);
    }
    return new_str;
}

void del_content(void *content)
{
    free(content);
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

int main(void)
{
    t_list *list = NULL;
    t_list *new_list;

    ft_lstadd_back(&list, ft_lstnew(ft_strdup("hello")));
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("world")));
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("42")));

    print_list(list);

    new_list = ft_lstmap(list, ft_toupper_wrapper, del_content);

    print_list(new_list);

    ft_lstclear(&list, del_content);
    ft_lstclear(&new_list, del_content);

    return 0;
}*/
