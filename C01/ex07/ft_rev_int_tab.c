#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = tmp;
		i++;
	}
}
/*
int	main(void)
{
	int size = 5;
	int tab[] = {1, 2, 3, 4, 5};
	ft_rev_int_tab(tab,size);
	int i = 0;
	while (i < size)
	{
		write (1,&(char){tab[i] + '0'},1);
		i++;
	}
	return 0;
}
*/
