char	*ft_strcapitalize(char *str)
{
	char	*s;
	int	is_first_letter;

	s = str;
	is_first_letter = 1;

	while (*s)
	{
		if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
		{
			if (is_first_letter && (*s >= 'a' && *s <= 'z'))
			{
				*s = *s - ('a' - 'A');
				is_first_letter = 0;
			}
			else if (!is_first_letter && (*s >= 'A' && *s <= 'Z'))
			{	
				*s = *s - ('a' - 'A');
			}
		}
		else
		{
			is_first_letter = 1;
		}
		s++;
	}
	return (str);
}

#include <stdio.h>
int	main(void)
{
	char *string = "HELLO";
	printf("%s\n", ft_strcapitalize(string));
}
