/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: golee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 20:44:47 by golee             #+#    #+#             */
/*   Updated: 2022/02/23 20:51:42 by golee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int	argc, char	**argv)
{
	int	i;

	if (argc == 1)
		return (-1);
	i = 1;
	while (argv[i] != 0)
	{
		ft_putstr(argv[i]);
		write (1, "\n", 1);
		i++;
	}
	return 0;
}
