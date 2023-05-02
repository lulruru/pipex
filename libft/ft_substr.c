/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rencarna <rencarna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:09:00 by rencarna          #+#    #+#             */
/*   Updated: 2022/11/18 15:17:34 by rencarna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	len_s;

	len_s = ft_strlen(s);
	i = 0;
	if (start + len > len_s)
		len = len_s - start;
	if (!s || start >= len_s)
		return (str = ft_calloc(1, 1));
	str = malloc ((len + 1) * sizeof (char));
	if (!str)
		return (0);
	while (s[start + i] && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int main (void)
{
	char *str = "je suis trop drole";
	int starts= 0;
	size_t	l = 7;

	printf("%s", ft_substr(str, starts, l));
	
}*/
