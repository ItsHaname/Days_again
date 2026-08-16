int ft_strlen(char *str)
{
	int len;

	len = 0;
	while(str[len])
		len++;
	return len ;
}



char *ft_strcat(char *dest, char *src)
{
	int len_src = ft_strlen(src);
	int len_dest = ft_strlen(dest);
	int i = 0 ;
	while(i < len_src)
	{
		dest[len_dest + i] = src[i] ;
		i++;
	}
	dest[len_dest + len_src] = '\0';
	return dest;
}

#include <stdio.h>

int main()
{
	char s1[100] = "mohamedlakhdar";
	char s2[10] = "salama";
	char *s3 = ft_strcat(s1 , s2);
	printf("%s", s3);
}
