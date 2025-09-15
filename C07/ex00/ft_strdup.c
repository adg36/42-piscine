#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	dup = malloc((i + 1) * sizeof(char));
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
