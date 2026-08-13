#include <unistd.h>

void	ft_write_pair(int i, int j)
{
	char	pair[7];

	pair[0] = i / 10 + '0';
	pair[1] = i % 10 + '0';
	pair[2] = ' ';
	pair[3] = j / 10 + '0';
	pair[4] = j % 10 + '0';
	pair[5] = ',';
	pair[6] = ' ';
	if (i == 98)
		write(1, pair, 5);
	else
		write(1, pair, 7);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_write_pair(i, j);
			j++;
		}
		i++;
	}
}
