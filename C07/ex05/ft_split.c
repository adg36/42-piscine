#include <stdio.h>

int		is_sep(char *str, char c);
char	*ft_strcpy(char *str, int start, int end);
int		ft_count_words(char *str, char *sep);

char	**ft_split(char *str, char *charset)
{
	int	i;
	int	new_word;
	int	word;
	char	**words;

	words = (char **)malloc((ft_count_words(str, charset) + 1) * sizeof(char *));
	i = 0;
	word = 0;
	new_word = 0;
	if (!words)
		return (0);
	while (str[i])
	{
		while (str[i] && is_sep(charset, str[i]))
			i++;
		new_word = i;
		while (str[i] && !is_sep(charset, str[i]))
			i++;
		if (new_word < i)
			words[word++] = ft_strcpy(str, new_word, i);
	}
	words[word] = 0;
	return (words);
}

int	is_sep(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

int	ft_count_words(char *str, char *sep)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && is_sep(sep, *str))
			str++;
		if (*str && !is_sep(sep, *str))
		{
			count++;
			while (*str && !is_sep(sep, *str))
				str++;
		}
	}
	return (count);
}

char	*ft_strcpy(char *str, int start, int end)
{
	char	*words;
	int	i;

	words = (char *)malloc((end - start + 1) * sizeof(char));
	i = 0;
	while (start < end)
	{
		words[i] = str[start];
		i++;
		start++;
	}
	words[i] = '\0';
	return (words);
}
