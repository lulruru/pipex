/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rencarna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:36:38 by rencarna          #+#    #+#             */
/*   Updated: 2022/11/14 14:42:04 by rencarna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*ptr_s1;

	i = 0;
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_char_set(s1[start], set))
		start++;
	while (end > start && ft_char_set(s1[end - 1], set))
		end--;
	ptr_s1 = malloc(sizeof(char) * (end - start + 1));
	if (!(ptr_s1))
		return (NULL);
	while (end > start)
		ptr_s1[i++] = s1[start++];
	ptr_s1[i] = '\0';
	return (ptr_s1);
}
