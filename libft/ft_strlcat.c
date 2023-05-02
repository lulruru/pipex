/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rencarna <rencarna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:49:56 by rencarna          #+#    #+#             */
/*   Updated: 2022/11/22 13:51:24 by rencarna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	ldest;
	size_t	i;
	size_t	maxl;

	ldest = ft_strlen(dest);
	maxl = ft_strlen(src) + ldest;
	i = 0;
	if (!size)
		return (ft_strlen(src));
	if (size < ldest)
		return (ft_strlen(src) + size);
	while (src[i] != '\0' && i + ldest < size - 1)
	{
		dest[i + ldest] = src[i];
		i++;
	}
	dest[i + ldest] = '\0';
	return (maxl);
}

/*#include <string.h>
#include <stdio.h>
int main()
{
    char dst[7] = "000";
    char src[7] = "123";
    char dst1[7] = "000";
    char src1[7] = "123";
    printf("my: return:%d, dest:%s\n", ft_strlcat(dst,src,8), dst);
    printf("real: return:%d, dest:%s\n\n",strlcat(dst1,src1,8), dst1);

    char dst2[7] = "";
    char src2[7] = "123";
    char dst3[7] = "";
    char src3[7] = "123";
    printf("my: return:%d, dest:%s\n", ft_strlcat(dst2,src2,2), dst2);
    printf("real: return:%d, dest:%s\n\n", strlcat(dst3,src3,2), dst3);

    char dst4[7] = "000";
    char src4[7] = "";
    char dst5[7] = "000";
    char src5[7] = "";
    printf("my: return:%d, dest:%s\n", ft_strlcat(dst4,src4,7), dst4);
    printf("real: return:%d, dest:%s\n\n", strlcat(dst5,src5,7), dst5);

    char dst6[7] = "000";
    char src6[7] = "123";
    char dst7[7] = "000";
    char src7[7] = "123";
    printf("my: return:%d, dest:%s\n", ft_strlcat(dst6,src6,0), dst6);
    printf("real: return:%d, dest:%s\n\n", strlcat(dst7,src7,0), dst7);
}*/
