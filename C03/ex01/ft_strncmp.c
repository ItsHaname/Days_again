int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	i = 0;

	while(i < n && (s1[i] || s2[i]))
	{
		if(s1[i] != s2[i])
			return s1[i] - s2[i];
		i++;
	}
	return 0 ;
}

#include <string.h>
#include <stdio.h>
int main()
{
	char *s1 = "mohamed lakh";
	char *s2 = "mohamed lakhdar";
	int n = strlen(s1);
	n++;
	int cmp = ft_strncmp(s1, s2 , n);
	printf("%d" , cmp);
}
