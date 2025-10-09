/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 09:41:45 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/08 09:50:55 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		size;
	int		*tab;
	int		*start;

	if (min >= max)
		return (NULL);
	size = max - min;
	tab = malloc(size * sizeof(int));
	if (!tab)
		return (NULL);
	start = tab;
	while (min != max)
	{
		*tab = min;
		tab++;
		min++;
	}
	return (start);
}

/*int	main(void)
{
	int	*tab;
	int i = 0;

	tab = ft_range(-1, 5);

	while (i < 6)
	{
		printf("%i\n", tab[i]);
		i++;
	}
}*/
