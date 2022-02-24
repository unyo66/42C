/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: golee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 20:37:32 by golee             #+#    #+#             */
/*   Updated: 2022/02/22 20:47:45 by golee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int	nb)
{
	int	ret;

	if (nb < 0 || nb > 12)
		return (0);
	ret = 1;
	while (nb > 1)
	{
		ret = ret * nb;
		nb -= 1;
	}
	return (ret);
}
