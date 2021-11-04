#include "libft.h"

char	check_char(char const *s1, char const *set)
{
	while (set[i] != '\0')
	{
		if (s1[i] == set[i])
			return (1);
		if (s1[i] != set[i])
			return (0);
	}
	return (NULL);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;

	i = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	if (check_char(s1, set))
		i++;
	i = ft_strlen(s1) - 2;
	if (check_char(s1, set))
		i--;
	str = ft_strdup(s1);
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	front;
	size_t	back;
	char	*str;

	str = 0;
	if (s1 && set)
	{
		front = 0;
		back = ft_strlen(s1);
		while (s1[front] && ft_strchr(set, s1[front]))
			front++;
		while (s1[back - 1] && ft_strchr(set, s1[back - 1]) && back > front)
			back--;
		str = (char *)malloc(sizeof(char) * (back - front + 1));
		if (!str)
			return (NULL);
		if (str)
			ft_strlcpy(str, &s1[front], back - front + 1);
	}
	return (str);
}

int main()
{
	printf("%s\n", ft_strtrim("abqbc", "abc"));
	printf("%s\n", ft_strtrim("xavocadoyz", "xyz"));
	return 0;
}