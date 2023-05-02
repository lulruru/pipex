/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rencarna <rencarna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:22:13 by rencarna          #+#    #+#             */
/*   Updated: 2022/11/14 16:46:59 by rencarna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int srch )
{
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = (char *)str;
	while (str[i])
	{
		if (str[i] == (unsigned char)srch)
			return (tmp);
		tmp++;
		i++;
	}
	if (str[i] == '\0' && srch == '\0')
		return (tmp);
	return (0);
}
