int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	int	num;

	num = nb;
	while (num >= nb)
	{
		if (ft_is_prime(num))
			return (num);
		num++;
	}
	return (0);
}

int     ft_is_prime(int nb)
{
        int     i;

        if (nb < 2)
                return (0);
        i = 2;
        while (i * i <= nb)
        {
                if (nb % i == 0)
                        return (0);
                i++;
        }
        return (1);
}
