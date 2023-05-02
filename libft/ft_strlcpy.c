/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rencarna <rencarna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 21:37:34 by rencarna          #+#    #+#             */
/*   Updated: 2022/11/08 14:18:25 by rencarna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	lsrc;

	i = 0;
	lsrc = ft_strlen((char *)src);
	if (!size)
		return (lsrc);
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (lsrc);
}

/*#include <string.h>
#include <stdio.h>
int main()
{
    char dst[7] = "0000000";
    char src[7] = "123";
    char dst1[7] = "0000000";
    char src1[7] = "123";
    printf("my: return:%d, dest:%s\n",ft_strlcpy(dst,src,6), dst);
    printf("real: return:%d, dest:%s\n\n",strlcpy(dst1,src1,6), dst1);

    char dst2[7] = "";
    char src2[7] = "123";
    char dst3[7] = "";
    char src3[7] = "123";
    printf("my: return:%d, dest:%s\n", ft_strlcpy(dst2,src2,6), dst2);
    printf("real: return:%d, dest:%s\n\n", strlcpy(dst3,src3,6), dst3);

    char dst4[7] = "0000000";
    char src4[7] = "";
    char dst5[7] = "0000000";
    char src5[7] = "";
    printf("my: return:%d, dest:%s\n", ft_strlcpy(dst4,src4,6), dst4);
    printf("real: return:%d, dest:%s\n\n", strlcpy(dst5,src5,6), dst5);

    char dst6[7] = "0000000";
    char src6[7] = "";
    char dst7[7] = "0000000";
    char src7[7] = "";
    printf("my: return:%d, dest:%s\n", ft_strlcpy(dst6,src6,0), dst6);
    printf("real: return:%d, dest:%s\n\n", strlcpy(dst7,src7,0), dst7);
}*/