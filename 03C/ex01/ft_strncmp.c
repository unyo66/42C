/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: golee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:14:22 by golee             #+#    #+#             */
/*   Updated: 2022/02/22 16:45:54 by golee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char	*s1, char	*s2, unsigned int	n)
{
	unsigned int	i;
	int				val;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		val = s1[i] - s2[i];
		if (val == 0)
			i++;
		else
			return (val);
	}
	return (0);
}