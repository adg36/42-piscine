void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp_div;
	int	tmp_mod;
	
	tmp_div = *a / *b;
	tmp_mod = *a % *b;

	*a = tmp_div;
	*b = tmp_mod;
}
