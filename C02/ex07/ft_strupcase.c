char	*ft_strupcase(char *str)
{
	char	*s;

	s = str;
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s = *s - ('a' - 'A');
		s++;
	}
	return (str);
}
