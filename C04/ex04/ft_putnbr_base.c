#include <unistd.h>

int	ft_strlen(char *str);
int	is_valid_base(char *base, int base_len);
void	putnbr_recursive(long n, char *base, int base_len);

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;
	int	base_len;
	char	c;

	base_len = ft_strlen(base);
	if (!is_valid_base(base, base_len))
		return;
	n = nbr;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= base_len)
		putnbr_recursive(n / base_len, base, base_len);
	c = base[n % base_len];
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
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
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
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

void	putnbr_recursive(long n, char *base, int base_len)
{
	char	c;

	if (n >= base_len)
		putnbr_recursive(n / base_len, base, base_len);
	c = base[n % base_len];
	write(1, &c, 1);
}
