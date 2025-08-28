void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp;
		i++;
		j--;
	}
}

#include <stdio.h>
int	main(void)
{
	int tab[] = {1, 2, 3, 4, 5};
	int i = 0;
	
	ft_rev_int_tab(tab, 5);

	while (i < 5)
	{
		printf("%i\n", tab[i]);
		i++;
	}
}
