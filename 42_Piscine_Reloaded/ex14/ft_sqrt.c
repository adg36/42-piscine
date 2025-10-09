/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 13:00:00 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/07 13:07:41 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <time.h>

int	ft_sqrt(int nb)
{
	int	guess;

	guess = 1;
	while (guess < nb)
	{
		if (guess * guess == nb)
			return (guess);
		guess++;
	}
	return (0);
}

/*int   main(void)
{
    clock_t t;
    t = clock();
	printf("%i\n", ft_sqrt(9));
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("time taken: %f seconds\n", time_taken);
    return 0;
}*/
