#include <unistd.h>

void	ft_write_comb(int i, int j, int k)
{
	char	comb[5];

	comb[0] = i + '0';
	comb[1] = j + '0';
	comb[2] = k + '0';
	comb[3] = ',';
	comb[4] = ' ';
	if (i == 7)
		write(1, comb, 3);
	else
		write(1, comb, 5);
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
				ft_write_comb(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
