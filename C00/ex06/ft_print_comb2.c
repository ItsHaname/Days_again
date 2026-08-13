#include <unistd.h>

void	ft_print_comb2(void)
{
	char	pair[5];
	int		i;
	int		j;

	pair[2] = ' ';
	i = 0;
	while (i <= 98)
	{
		pair[0] = (i / 10) + '0';
		pair[1] = (i % 10) + '0';
		j = i + 1;
		while (j <= 99)
		{
			pair[3] = (j / 10) + '0';
			pair[4] = (j % 10) + '0';
			write (1, pair, 5);
			if (i != 98)
				write (1, ", ", 2);
			j++;
		}
		i++;
	}
}
