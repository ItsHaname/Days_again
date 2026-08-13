#include <unistd.h>

void	afficher(int n)
{
	char	c;

	c = n + '0';
	write (1, &c, 1);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				afficher(i);
				afficher(j);
				afficher(k);
				if (i != 7)
					write (1, ", ", 2);
				k++;
			}
			j++;
		}
		i++;
	}
}
