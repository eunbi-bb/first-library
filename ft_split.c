#include "libft.h"
#include<stdio.h>

size_t	word_counter(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s != '\0' && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	size_t		len;
	const char	*start;
	char		**str;

	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(*str) * word_counter(s, c) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		start = s;
		
		while (*s && *s != c)
		{
			s++;
			len++;
		}
		
		while (*s && *s != c)
			s++;
	
		if (*(s - 1) != c)
			str[i++] = ft_substr(start, 0, start - s);
	}
	str[i] = 0;
	return (str);
}

int	main(void)
{
	char	*splstr = "aim my mammoth at me";
	printf("ft_split(\"%s\", 'm'):\n", splstr);
	char	**split = ft_split(splstr, 'm');
	while (*split)
		printf("\"%s\"\n", *split++);
}
