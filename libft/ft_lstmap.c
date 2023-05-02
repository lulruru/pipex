/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rencarna <rencarna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:35:13 by rencarna          #+#    #+#             */
/*   Updated: 2022/11/18 16:57:42 by rencarna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newele;

	newlst = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		newele = ft_lstnew(((*f)(lst->content)));
		if (!newele)
		{
			ft_lstclear(&newele, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, newele);
		lst = lst->next;
	}
	return (newlst);
}
