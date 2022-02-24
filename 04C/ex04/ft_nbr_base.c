/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: golee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:31:53 by golee             #+#    #+#             */
/*   Updated: 2022/02/22 20:37:02 by golee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char	c)
{
	write (1, &c, 1);
}

int	ft_okay(char	*base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (1);
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (1);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (2);
}

void	ft_putnbr_base(int	nbr, char	*base)
{
	int	bs;
	int	bs_bs;

	if (ft_okay(base) == 1)
		return ;
	bs = 0;
	while (base[bs] != '\0')
		bs++;
	bs_bs = 1;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	while ((nbr / bs_bs) != 0)
		bs_bs *= bs;
	bs_bs /= bs;
	while (bs_bs != 0)
	{
		ft_putchar(base[(nbr / bs_bs) % bs]);
		bs_bs /= bs;
	}
}
