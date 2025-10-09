/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 10:31:21 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/08 13:23:31 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*void	ft_putnbr(int nb)
{
	char	c;
	char	minus;
	long	n;

	n = nb;
	minus = '-';
	if (n < 0)
	{
		write(1, &minus, 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
}

int	main(void)
{
	int tab[] = {1, 2, 3, 4, 5};

	ft_foreach(tab, 5, &ft_putnbr);
	return (0);
}*/
