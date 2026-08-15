#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int main ()
{
	char hehe[3];
	int a = 14;
	int b = 2;
	ft_ultimate_div_mod(&a,&b);
	hehe[0] = a + '0';
	hehe[1] = '\n';
	hehe[2] = b + '0';
	write (1,hehe,3);
	return 0;
}
*/
