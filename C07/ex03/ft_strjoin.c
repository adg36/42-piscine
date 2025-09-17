#include <stdlib.h>

int	ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*final_str;
	char	*p;
	char	*s;
	int	i;
	int	sep_len;
	int	total_len;

	if (size == 0)
		final_str = malloc(1);
	if (!final_str)
		return (NULL);
	sep_len = ft_strlen(sep);
	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;	
	}
	total_len += (size - 1) * sep_len;
 	final_str = malloc(total_len + 1);
	if (!final_str)
		return (NULL);
	p = final_str;
	i = 0;
	while (i < size)
	{
		while (*strs[i])
		{
			*p++ = *strs[i]++;
		}
		if (i < size - 1)
		{
			s = sep;
			while (*s)
				*p++ = *s++;
		}
		i++;
	}
	*p = '\0';
	return (final_str);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
