#include <unistd.h>

void	afficher(int i, int j, int k)
{
	char	comb[3];

	comb[0] = i + '0';
	comb[1] = j + '0';
	comb[2] = k + '0';
	write (1, comb, 3);
	if (i != 7)
		write (1, ", ", 2);
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
				afficher(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
