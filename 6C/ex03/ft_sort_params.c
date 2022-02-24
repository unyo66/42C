/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: golee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 20:57:51 by golee             #+#    #+#             */
/*   Updated: 2022/02/24 12:39:16 by golee            ###   ########.fr       */
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

void	ft_swap(char	**a, char	**b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	ft_strcmp(char	*s1, char	*s2)
{
	int	i;
	int	val;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		val = s1[i] - s2[i];
		if (val == 0)
			i++;
		else
			return (val);
	}
	return (0);
}

int	main(int	argc, char	**argv)
{
	int	i;
	int	j;

	i = 1;
	while (i++ < argc)
	{
		j = 1;
		while (j + 1 < argc)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				ft_swap(&argv[j], &argv[j + 1]);
				j++;
			}
		}
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return 0;
}
