// #include <string.h>
// #include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] && i < size)
		i++;
	j = 0;
	while (src[j] && i < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	while (src[j])
	{
		j++;
		i++;
	}	
		return (i);
}
/*
int	main(void)
{
	char dest1[20] = "1337 42";
	char dest2[20] = "1337 42";
	char *src = "Born to code";

	printf("Mine:     %i\n", ft_strlcat(dest1, src, 7));
	printf("Expected: %li\n", strlcat(dest2, src, 7));
}*/
