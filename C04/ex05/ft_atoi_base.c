int	ft_strlen(char *str);
int	is_valid_base(char *base, int base_len);
int	is_valid_char(char c, char *base);
int	get_index(char c, char *base);

int	ft_atoi_base(char *str, char *base)
{
	int	n;
	int	minus;
	int	base_len;

	base_len = ft_strlen(base);
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
	while (is_valid_char(*str, base))
	{
		n = n * base_len + get_index(*str, base);
		str++;
	}
	if (minus)
		return (-n);
	return (n);
}

int	is_valid_base(char *base, int base_len)
{
	int	i;
	int	j;

	if (base_len == 0 || base_len == 1)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	is_valid_char(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	get_index(char c, char *base)
{
	int	i;

	i = 0;
	while (*base)
	{
		if (c == *base)
		{
			break;
		}
		base++;
		i++;
	}
	return (i);
}
