/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rencarna <rencarna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:02:45 by rencarna          #+#    #+#             */
/*   Updated: 2022/11/13 20:20:58 by rencarna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	int		j;
	int		ls1;
	int		ls2;

	i = 0;
	j = 0;
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	new = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new)
		return (NULL);
	while (i < ls1)
		new[i++] = s1[j++];
	j = 0;
	while (i < ls1 + ls2)
		new[i++] = s2[j++];
	new[i] = '\0';
	return (new);
}

/*int    main(void)
{
    char    tab[] = "/!\\ Hello ";
    char    tab2[] = "World /!\\";
    printf("%s\n", ft_strjoin(tab, tab2));
    return (0);
}*/
