#include <unistd.h>

void	ft_print_numbers(void)
{
	int		a;
	char	c;

	a = 0;
	while (a <= 9)
	{
		c = a + '0';
		write (1, &c, 1);
		a++;
	}
}
