/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haait-ba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 19:02:00 by haait-ba          #+#    #+#             */
/*   Updated: 2026/08/17 19:30:00 by haait-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				lendest;

	lendest = ft_strlen(dest);
	i = 0;
	while (src[i] && i < nb)
	{
		dest[i + lendest] = src[i];
		i++;
	}
	dest[i + lendest] = '\0';
	return (dest);
}
