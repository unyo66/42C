/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: golee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:54:22 by golee             #+#    #+#             */
/*   Updated: 2022/02/15 20:44:32 by golee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char	*dest, char	*src, unsigned int	size)
{
	unsigned int	len;
	unsigned int	i;

	len = 0;
	i = 0;
	while (src[len] != '\0')
		len++;
	while (i < len && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
