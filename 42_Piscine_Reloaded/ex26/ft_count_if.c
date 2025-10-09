/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:52:26 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/08 13:06:29 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
		{
			counter++;
			i++;
		}
		else
			i++;
	}
	return (counter);
}

/*int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	char *tab[5] = {"maria", "42Porto", "apple", "Renata", 0};

	printf("%i\n", ft_count_if(tab, &ft_str_is_alpha));
}*/
