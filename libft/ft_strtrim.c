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
