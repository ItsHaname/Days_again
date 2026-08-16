int ft_strlen(char *str)
{
	int i;

	i = 0 ;
	while(str[i])
	{	i++;
	}
	return i;
}
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int lendest = ft_strlen(dest); 
	int lensrc = ft_strlen(src);

	int i = 0 ;
	int howMuchContcatenate = (nb > lensrc) ? lensrc : nb ;

}
