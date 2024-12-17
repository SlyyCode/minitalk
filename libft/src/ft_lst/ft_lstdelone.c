/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletourn <aletourn@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:45:26 by aletourn          #+#    #+#             */
/*   Updated: 2024/11/07 14:45:27 by aletourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
/*
void del_content(void *content)
{
    free(content);
}

int main()
{
    char *str = ft_strdup("Contenu à supprimer");
    t_list *node = ft_lstnew(str);

    if (node == NULL || node->content == NULL)
    {
        printf("Erreur lors de la création du nœud.\n");
        return 1;
    }

    printf("Contenu avant suppression : %s\n", (char *)node->content);

    ft_lstdelone(node, del_content);

    printf("Le nœud a été supprimé.\n");

    // Note : Ne pas essayer d'accéder à 'node' ici, car il a été libéré

    return 0;
}*/
