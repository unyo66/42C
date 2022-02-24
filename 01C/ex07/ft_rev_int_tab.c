/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: golee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:56:39 by golee             #+#    #+#             */
/*   Updated: 2022/02/10 20:30:55 by golee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int	*a, int	*b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_int_tab(int	*tab, int	size)
{
	int		right;
	int		i;

	i = 0;
	right = size - 1;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[right]);
		i++;
		right--;
	}
}
