char	*ft_strlowcase(char *str)
{
	char	*s;

	s = str;
	while (*s)
	{
		if (*s >= 'A' && *s <= 'Z')
			*s = *s + ('a' - 'A');
		s++;
	}
	return (str);
}
