/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: golee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:43:53 by golee             #+#    #+#             */
/*   Updated: 2022/02/17 11:52:13 by golee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}

int	ft_type(char	c)
{
	if (c >= 0 && c <= 47)
		return (1);
	else if (c >= 58 && c <= 64)
		return (1);
	else if (c >= 91 && c <= 96)
		return (1);
	else if (c >= 123 && c <= 127)
		return (1);
	else
		return (2);
}

char	*ft_strcapitalize(char	*str)
{
	int	i;

	ft_strlowcase (str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (ft_type(str[i - 1]) == 1)
				str[i] -= 32;
			else if (i == 0)
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
