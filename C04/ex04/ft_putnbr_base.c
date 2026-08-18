/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haait-ba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 12:16:00 by haait-ba          #+#    #+#             */
/*   Updated: 2026/08/18 14:00:00 by haait-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	is_base_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

unsigned int	get_abs(int nbr)
{
	if (nbr < 0)
		return (-(unsigned int)nbr);
	return ((unsigned int)nbr);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				i;
	unsigned int	n;
	int				tab[32];

	if (is_base_valid(base) == 0)
		return ;
	if (nbr < 0)
		write(1, "-", 1);
	n = get_abs(nbr);
	i = 0;
	if (n == 0)
	{
		tab[i] = 0;
		i++;
	}
	while (n > 0)
	{
		tab[i] = n % ft_strlen(base);
		n = n / ft_strlen(base);
		i++;
	}
	while (i > 0)
		write(1, &base[tab[--i]], 1);
}
