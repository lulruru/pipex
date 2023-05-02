/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rencarna <rencarna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:16:29 by rencarna          #+#    #+#             */
/*   Updated: 2022/11/22 14:27:45 by rencarna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		*((unsigned char *) s + (i++)) = (unsigned char) c;
	return (s);
}

/*int main (void)
{
	char *str = "test";
	char c = 'x';
	
	str = malloc(sizeof(char) + 1);
	printf("%s", ft_memset(str, c, 4));
	
}*/