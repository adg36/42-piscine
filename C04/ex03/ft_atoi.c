// #include <stdio.h>

int	ft_atoi(char *str)
{
	int	n;
	int	minus;

	n = 0;
	minus = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus++;
		str++;
	}
	if (minus % 2 != 0)
		minus = 1;
	else
		minus = 0;
	while (*str >= '0' && *str <= '9')
	{
		n = n * 10 + (*str - '0');
		str++;	
	}
	if (minus)
		return (-n);
	return (n);
}

/*int	main(void)
{
	printf("%i\n", ft_atoi("--123"));
}*/
