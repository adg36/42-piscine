#include <unistd.h>

int	ft_strcmp(char *s1, char *s2);

int	main(int argc, char * argv[])
{
	int	i;
	int	j;
	char	*tmp;
	
	if (argc > 1)
	{
		i = 0;
		while (i < argc - 1)
		{
			j = 1;
			while (j < argc - i - 1)
			{
				if (ft_strcmp(argv[j], argv[j + 1]) > 0)
				{
					tmp = argv[j];
					argv[j] = argv[j + 1];
					argv[j + 1] = tmp;
				}
				j++;
			}
			i++;
		}
		i = 1;
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				write(1, &argv[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
