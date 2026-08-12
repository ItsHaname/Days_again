#include <unistd.h>

void	afficher(int idx[9], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		write(1, &(char){idx[i] + '0'}, 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	idx[9];
	int	i;

	i = 0;
	while (i < n)
	{
		idx[i] = i;
		i++;
	}












