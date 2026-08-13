#include <unistd.h>

void	ft_print_numbers(void)
{
	int	a;

	a = 0;
	while (a <= 9)
	{
		write (1, &(char){a + '0'}, 1);
		a++;
	}
}
