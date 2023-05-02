/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rencarna <rencarna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:14:37 by rencarna          #+#    #+#             */
/*   Updated: 2022/11/13 15:39:21 by rencarna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	long int	modulo;
	long int	division;
	long int	longnb;

	longnb = n;
	if (longnb < 0)
	{
		longnb = longnb * (-1);
		ft_putchar_fd('-', fd);
	}
	division = longnb / 10;
	modulo = longnb % 10;
	if (division != 0)
		ft_putnbr_fd(division, fd);
	ft_putchar_fd(48 + modulo, fd);
}
