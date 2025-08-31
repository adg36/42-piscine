char	*ft_strcat(char *dest, char *src)
{
	char	*final_dest;

	final_dest = dest;
	while (*dest)
		dest++;
	while (*src)
	{	
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (final_dest);
}
