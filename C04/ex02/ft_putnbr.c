/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haait-ba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 19:40:00 by haait-ba          #+#    #+#             */
/*   Updated: 2026/08/18 14:00:00 by haait-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	unsigned int	n;
	char			tab[10];
	int				i;

	if (nb < 0)
	{
		write(1, "-", 1);
		n = -(unsigned int)nb;
	}
	else
		n = (unsigned int)nb;
	i = 0;
	if (n == 0)
		tab[i++] = '0';
	while (n > 0)
	{
		tab[i++] = n % 10 + '0';
		n = n / 10;
	}
	while (i > 0)
		write(1, &tab[--i], 1);
}
