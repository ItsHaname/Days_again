/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haait-ba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 18:41:00 by haait-ba          #+#    #+#             */
/*   Updated: 2026/08/17 19:30:00 by haait-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	start_with(char *little, char *big)
{
	int	i;

	i = 0;
	while (little[i])
	{
		if (little[i] != big[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (!to_find[0])
		return (str);
	while (str[i])
	{
		if (start_with(to_find, &str[i]))
			return (&str[i]);
		i++;
	}
	return (0);
}
