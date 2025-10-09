/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 09:32:05 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/08 09:41:15 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>
#include <string.h>*/

int	ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	int		len;
	char	*dup;
	char	*start;

	len = ft_strlen(src);
	dup = malloc(len + 1);
	if (!dup)
		return (NULL);
	start = dup;
	while (*src)
	{
		*dup = *src;
		dup++;
		src++;
	}
	*dup = '\0';
	return (start);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

/*int	main(void)
{
	printf("Expected: %s\n", strdup("Maria"));
	printf("Mine    : %s\n", ft_strdup("Maria"));
}*/
