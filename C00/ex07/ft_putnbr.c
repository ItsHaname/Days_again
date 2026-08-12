#include <unistd.h>

void	ft_putnbr(int nb)
{
	unsigned int	n;
	char	tab[12];
	int	i;

	if (nb < 0)
	{
		n = (unsigned int)(-nb);
		write (1, "-", 1);
	}else
		n = (unsigned int)(nb);
	i = 0;
	if (n == 0)
	{
		tab[i] = '0';
		i++;
	}
	while (n > 0)
	{
		tab[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	while (i > 0)
		write (1,&tab[--i], 1);
}
