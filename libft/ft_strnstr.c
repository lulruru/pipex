/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rencarna <rencarna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:02:21 by rencarna          #+#    #+#             */
/*   Updated: 2022/11/13 17:46:08 by rencarna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	l;

	i = 0;
	l = ft_strlen(to_find);
	if (to_find[0] == '\0')
		return ((char *)str);
	if (l == 0 || str == to_find)
		return ((char *)str);
	while (str[i] && i < len)
	{
		j = 0;
		while (to_find[j] == str[i + j] && i + j < len)
			j++;
		if (j == l)
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int main()
{
	char *str;
	char *tofind;
	
	str = "salut ca va";
	tofind = "ca";
	size_t len = 7;
	
	printf("%s\n", ft_strnstr(str, tofind, len));
	printf("%s", strnstr(str, tofind, len));
	

}*/
