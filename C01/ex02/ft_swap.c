//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
int main ()
{
	int	a = 7;
	int 	b = 1;
	printf ("Before\n");
	printf ("a = %d\n",a);
	printf ("b = %d\n",b);
	ft_swap(&a,&b);
	printf("after:\n");
	printf ("a = %d\n",a);
	printf("b = %d\n",b);
	return 0;
}
*/
