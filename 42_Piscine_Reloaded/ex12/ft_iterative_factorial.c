/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 11:35:10 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/07 12:14:26 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <time.h>*/

int	ft_iterative_factorial(int nb)
{
	int	fact;

	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	fact = 1;
	while (nb > 0)
	{
		fact = fact * (nb);
		nb--;
	}
	return (fact);
}

/*int	main(void)
{
	clock_t t;
	t = clock();
	printf("%i\n", ft_iterative_factorial(5));
	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf("time taken: %f seconds\n", time_taken);
	return 0;
}*/
