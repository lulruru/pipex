/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rencarna <rencarna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:30:18 by rencarna          #+#    #+#             */
/*   Updated: 2022/11/22 14:23:48 by rencarna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp->next)
	tmp = tmp->next;
	return (tmp);
}

/*int    main(void)
{
	t_list    *lst;
	t_list    *one;
	t_list    *two;

	one = ft_lstnew("Best");
	two = ft_lstnew("jules");
	ft_lstadd_front(&lst, one);
	ft_lstadd_front(&lst, two);
   // two -> next = one;
   // one -> next = NULL;
	lst = ft_lstlast(lst);
	printf("%s\n", (char *)lst->content);
	return (0);
}*/
