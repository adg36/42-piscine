#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*arr;
	int	i;

	arr = NULL;
	if (min >= max)
	{
		*range = arr;
		return (0);
	}
	size = max - min;
	arr = malloc(size * sizeof(int));
	if (!arr)
		return (-1);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	*range = arr;
	return (size);
}
