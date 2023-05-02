/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rencarna <rencarna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:07:40 by rencarna          #+#    #+#             */
/*   Updated: 2022/11/14 13:09:18 by rencarna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(int n)
{
	int			len;
	long int	nb;

	nb = n;
	len = 0;
	if (nb <= 0)
	{
		nb *= -1;
		len++;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	long int	nbr;
	size_t		i;
	char		*str;

	nbr = nb;
	i = len(nbr);
	str = malloc (sizeof(char) * (i + 1));
	str[i--] = '\0';
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		nbr *= -1;
		str[0] = '-';
	}
	if (nbr == 0)
		str[0] = '0';
	while (nbr > 0)
	{
		str[i] = 48 + (nbr % 10);
		nbr /= 10;
		i--;
	}
	return (str);
}

/*int main (int ac, char **av)
{
	char *str;
	int i = 0;
	
	str = ft_itoa(atoi(av[1]));
	printf("%s \n", str);
	printf("%d", len(-2147483648));
}*/
