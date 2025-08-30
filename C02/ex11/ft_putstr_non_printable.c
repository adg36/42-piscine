#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	*hex;
	int	first_index;
	int	second_index;

	hex = "0123456789abcdef";
	while (*str)
	{
		if (*str >= 0 && *str <= 31)
		{
			first_index = *str / 16;
			second_index = *str % 16;
			write(1, "\\", 1);
			write(1, &hex[first_index], 1);
			write(1, &hex[second_index], 1);
			str++;
		}
		else
		{
			write(1, str, 1);
			str++;
		}
	}
}
