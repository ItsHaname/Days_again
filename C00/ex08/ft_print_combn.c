#include <unistd.h>

void	ft_write_comb(char *comb, int n)
{
	write(1, comb, n);
	if (comb[0] != '9' - n + 1)
		write(1, ", ", 2);
}

void	ft_next_comb(char *comb, int n, int pos, int min)
{
	int	digit;

	digit = min;
	while (digit <= 9 - (n - 1 - pos))
	{
		comb[pos] = digit + '0';
		if (pos == n - 1)
			ft_write_comb(comb, n);
		else
			ft_next_comb(comb, n, pos + 1, digit + 1);
		digit++;
	}
}

void	ft_print_combn(int n)
{
	char	comb[10];

	if (n < 1 || n > 10)
		return ;
	ft_next_comb(comb, n, 0, 0);
}
