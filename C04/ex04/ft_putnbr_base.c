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

int	base_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	if (base_len(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	n;
	int				len;
	int				i;
	char			tab[32];

	if (!is_valid_base(base))
		return ;
	len = base_len(base);
	if (nbr < 0)
	{
		write(1, "-", 1);
		n = -(unsigned int)nbr;
	}
	else
		n = (unsigned int)nbr;
	i = 0;
	if (n == 0)
		tab[i++] = base[0];
	while (n > 0)
	{
		tab[i++] = base[n % len];
		n = n / len;
	}
	while (i > 0)
		write(1, &tab[--i], 1);
}
