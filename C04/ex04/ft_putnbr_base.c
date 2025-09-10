#include <unistd.h>

int	ft_strlen(char *str);
int	is_valid_base(char *str);

void	ft_putnbr_base(int nbr, char *base)
{

}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_valid_base(char *str)
{

}
