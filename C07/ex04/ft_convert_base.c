#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	count_digits(int n, int base_len);
int     ft_strlen(char *str);
int     is_valid_base(char *base, int base_len);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	len_base_from;
	int	len_base_to;
	int	converted_nbr;
	int	count;
	char	*result;

	len_base_from = ft_strlen(base_from);
	len_base_to = ft_strlen(base_to);
	if (!is_valid_base(base_from, len_base_from) || !is_valid_base(base_to, len_base_to))
		return (NULL);
	converted_nbr = ft_atoi_base(nbr, base_from);
	count = count_digits(converted_nbr, len_base_to);
	if (converted_nbr < 0)
	{
		result = malloc(count + 2);
		result[0] = '-';
		converted_nbr = -converted_nbr;
	}
	else
	{
		result = malloc(count + 1);
		count -= 1;
	}
	if (!result)
		return (NULL);
	result[count + 1] = '\0';
	while (converted_nbr != 0)
	{
		result[count] = base_to[converted_nbr % len_base_to];
		count--;
		converted_nbr /= len_base_to;
	}
	return (result);
}

int	count_digits(int n, int base_len)
{
	int	count;

	count = 1;
	if (n < 0)
		n = -n;
	while (n >= base_len)
	{
		n /= base_len;
		count++;
	}
	return (count);
}
