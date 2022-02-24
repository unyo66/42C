/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: golee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:18:22 by golee             #+#    #+#             */
/*   Updated: 2022/02/22 20:22:47 by golee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_refine(char	*str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			str[j] = str[i];
			if (str[i + 1] >= '0' && str[i + 1] <= '9')
				j++;
			else
			{
				str[j + 1] = '\0';
				return ;
			}
		}
		i++;
	}
	str[j] = '\0';
}

int	ft_atoi(char	*str)
{
	int		i;
	int		ret;

	ret = 0;
	i = 0;
	while (str[i] != '\0')
	{
		ret *= 10;
		ret += str[i] - '0';
		i++;
	}
	return (ret);
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
		else
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

void	ft_change(char	*str, char	*base, int	bs, int	nbr)
{
	int	i;
	int	bs_bs;

	bs_bs = 1;
	while ((nbr / bs_bs) != 0)
		bs_bs *= bs;
	bs_bs /= bs;
	i = 0;
	while (bs_bs != 0)
	{
		if (nbr < 0)
			str[i + 1] = base[-(nbr / bs_bs) % bs];
		else
			str[i] = base[(nbr / bs_bs) % bs];
		bs_bs /= bs;
		i++;
	}
	if (nbr < 0)
	{
		str[0] = '-';
		str[i + 1] = '\0';
	}
	else
		str[i] = '\0';
}

int	ft_atoi_base(char	*str, char	*base)
{
	int	i;
	int	plma;
	int	bs;
	int	nbr;

	plma = 1;
	i = 0;
	while (str[i++] != '\0')
		if (str[i] == '-')
			plma *= -1;
	if (ft_okay(base) == 1)
		return (0);
	ft_refine(str);
	nbr = ft_atoi(str);
	if (plma == -1)
		nbr = -nbr;
	bs = 0;
	while (base[bs] != '\0')
		bs++;
	ft_change(str, base, bs, nbr);
	return (nbr);
}
