/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: golee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:58:43 by golee             #+#    #+#             */
/*   Updated: 2022/02/21 17:52:59 by golee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int	nb)
{
	long	lnb;
	long	lten;

	lnb = nb;
	if (nb == 0)
		ft_putchar('0');
	if (lnb < 0)
	{
		lnb = -lnb;
		ft_putchar('-');
	}
	lten = 1;
	while ((lnb / lten) != 0)
	{
		lten *= 10;
	}
	lten /= 10;
	while (lten != 0)
	{
		ft_putchar((lnb / lten) % 10 + '0');
		lten /= 10;
	}
}
