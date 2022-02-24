/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: golee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 10:37:39 by golee             #+#    #+#             */
/*   Updated: 2022/02/16 18:40:02 by golee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_comma(void)
{
	char	*com;

	com = ", ";
	write (1, com, 2);
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = 47;
	while (i++ <= '7')
	{
		j = '0';
		while (++j <= '8')
		{
			k = '1';
			while (++k <= '9')
			{
				if (k > j && j > i)
				{
					write (1, &i, 1);
					write (1, &j, 1);
					write (1, &k, 1);
					if (i != '7')
						ft_comma();
				}
			}
		}
	}
}
