#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main()
{
	int a = 14;
	int b = 2;
	int div;
	int mod;
	ft_div_mod(a,b,&div,&mod);
	write(1,&(char){div + '0'},1);
	write (1,"\n",1);
	write(1,&(char){mod + '0'},1);
	write (1,"\n",1);
	return 0;
}
*/
