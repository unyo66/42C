/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: golee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 20:26:52 by golee             #+#    #+#             */
/*   Updated: 2022/02/19 20:32:20 by golee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write (1, &c, 1);
}

void	ft_print(int	*narr, int	n)
{
	int	i;
	int	j;

	i = 0;
	while (++i < n)
		if (narr[i - 1] >= narr[i])
			return ;
	j = -1;
	while (++j < n)
		ft_putchar(narr[j] + '0');
	if (narr[0] < (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int	n)
{
	int	i;
	int	j;
	int	narr[10];

	if ((n <= 0) || (n >= 10))
		return ;
	i = -1;
	while (++i < n)
		narr[i] = i;
	while (narr[0] <= (10 - n))
	{
		ft_print(narr, n);
		narr[n - 1]++;
		j = n;
		while ((j > 0) && (n > 1))
		{
			j--;
			if (narr[j] > 9)
			{
				narr[j - 1]++;
				narr[j] = 0;
			}
		}
	}
}
