/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rencarna <rencarna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:27:02 by rencarna          #+#    #+#             */
/*   Updated: 2022/11/16 18:13:40 by rencarna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
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
    printf("%s\n", (char *)lst->content);
    return (0);
}*/