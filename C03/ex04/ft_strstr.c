// #include <stdio.h>
// #include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find = '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] && to_find[j] && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char myStr[] = "The rail in Spain falls mainly on the plains";
	char *myPtr = ft_strstr(myStr, "ain");
	char *theirPtr = strstr(myStr, "ain");
	if (myPtr != NULL)
	{
		printf("Mine:    %s\n", myPtr);
	}
	if (theirPtr != NULL)
	{
		printf("Expected: %s\n", theirPtr);
	}
	return 0;
}*/
