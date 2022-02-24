/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: golee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:20:55 by golee             #+#    #+#             */
/*   Updated: 2022/02/21 19:05:14 by golee            ###   ########.fr       */
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

void	ft_printable(char	c)
{
	if (c == -128)
	{
		write (1, "\\", 1);
		ft_putstr("-80");
	}
	else if (c >= 32 && c <= 126)
		return ;
	else if (c < 0)
	{
		write (1, "\\", 1);
		write (1, "-", 1);
	}
	else
		write (1, "\\", 1);
}

char	*ft_sixteen(char	c, char	*ret, char	*hex)
{
	int		a;
	int		b;

	hex = "0123456789abcdef";
	a = c / 16;
	b = c % 16;
	ret[0] = hex[a];
	ret[1] = hex[b];
	ret[2] = '\0';
	return (ret);
}

void	ft_putstr_non_printable(char	*str)
{
	int		i;
	char	hex[17];
	char	ret[3];

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == -128)
			ft_printable(str[i]);
		else if (str[i] < 0)
		{
			ft_printable(str[i]);
			str[i] = -str[i];
			ft_putstr(ft_sixteen(str[i], ret, hex));
		}
		else if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
		{
			ft_printable(str[i]);
			ft_putstr(ft_sixteen(str[i], ret, hex));
		}
		i++;
	}
}
