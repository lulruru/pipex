/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rencarna <rencarna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:31:29 by rencarna          #+#    #+#             */
/*   Updated: 2022/11/22 14:26:55 by rencarna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	char	ctwo;

	ctwo = c;
	if ((ctwo >= 'a' && ctwo <= 'z') || (ctwo >= 'A' && ctwo <= 'Z'))
		return (1);
	if (ctwo <= '9' && ctwo >= '0')
		return (1);
	return (0);
}

/*int main(int ac, char **av)
{
	int lol;
	lol = '8';
	printf("%d", ft_isalnum(lol));
}*/
