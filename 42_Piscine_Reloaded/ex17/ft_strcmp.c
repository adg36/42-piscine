/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 13:16:40 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/07 13:23:29 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 - *s2 < 0)
		return (-1);
	else if (*s1 - *s2 > 0)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("Expected: %i\n", strcmp("42Porto", "42Porto"));
	printf("Mine    : %i\n", ft_strcmp("42Porto", "42Porto"));
	printf("Expected: %i\n", strcmp("42Porta", "42Porto"));
	printf("Mine    : %i\n", ft_strcmp("42Porta", "42Porto"));
	printf("Expected: %i\n", strcmp("42Porto", "42Porta"));
	printf("Mine    : %i\n", ft_strcmp("42Porto", "42Porta"));
	printf("Expected: %i\n", strcmp("42Porta", "42"));
	printf("Mine    : %i\n", ft_strcmp("42Porta", "42"));
}*/
