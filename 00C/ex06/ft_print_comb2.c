/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: golee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:06:28 by golee             #+#    #+#             */
/*   Updated: 2022/02/16 18:40:18 by golee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write (1, &c, 1);
}

void	ft_print(int	num)
{
	char	a;
	char	b;

	a = num / 10 + '0';
	b = num % 10 + '0';
	ft_putchar(a);
	ft_putchar(b);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i;
		while (++j <= 99)
		{
			if (j > i)
			{
				ft_print(i);
				ft_putchar(' ');
				ft_print(j);
				if (i != 98)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
		i++;
	}
}
