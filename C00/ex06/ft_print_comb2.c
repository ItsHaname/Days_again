#include <unistd.h>

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
			write (1, &(char){(i / 10) + '0'}, 1);
			write (1, &(char){(i % 10) + '0'}, 1);
			write (1, " ", 1);
			write (1, &(char){(j / 10) + '0'}, 1);
			write (1, &(char){(j % 10) + '0'}, 1);
			if (i != 98)
				write (1, ", ", 2);
			j++;
		}
		i++;
	}
	write (1, "\n", 1);
}
