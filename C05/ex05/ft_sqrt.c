int	ft_sqrt(int nb)
{
	int	guess;

	guess = 1;
	while (guess * guess <= nb)
	{
		if (guess * guess == nb)
			return (guess);
		else
			guess++;
	}
	return (0);
}
