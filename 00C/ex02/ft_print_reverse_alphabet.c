/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: golee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 10:06:36 by golee             #+#    #+#             */
/*   Updated: 2022/02/07 13:25:01 by golee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	int		i;
	char	ralph;

	i = 0;
	ralph = 'z';
	while (i <= 25)
	{
		write(1, &ralph, 1);
		i++;
		ralph--;
	}
}
