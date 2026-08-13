#include <unistd.h>

void	ft_putnbr_unsigned(unsigned int n)
{
	char	c;

	if (n >= 10)
		ft_putnbr_unsigned(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr_unsigned(-(unsigned int)nb);
	}
	else
		ft_putnbr_unsigned((unsigned int)nb);
}
