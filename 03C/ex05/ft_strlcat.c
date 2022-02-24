/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: golee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:10:22 by golee             #+#    #+#             */
/*   Updated: 2022/02/23 17:50:53 by golee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlcat(char	*dest, char	*src, unsigned	int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j <= size - i && src[j] != '\0' && i < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
