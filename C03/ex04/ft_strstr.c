// #include <stdio.h>
// #include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	char	*found;

	i = 0;
	j = 0;
	while (str[i])
	{
		found = &str[i];
		while (str[i] == to_find[j] && to_find[j] != '\0')
		{
			i++;
			j++;
		}
		if (to_find[j] == '\0')
			return (found);
		else if (str[i] != to_find[j] && to_find[j] !='\0') 
		{
			j = 0;
			i++;
		}

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
