#include <unistd.h>

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
				write (1, &(char){i + '0'}, 1);
				write (1, &(char){j + '0'}, 1);
				write (1, &(char){k + '0'}, 1);
				if (i != 7)
					write (1, ", ", 2);
				k++;
			}
			j++;
		}
		i++;
	}
}
