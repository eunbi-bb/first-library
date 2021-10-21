#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;
	char			*str;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!s1 || !s2)
		return (ft_strdup(""));
	if (!str)
		return (NULL);
	while (s1)
	{
		str[i] = s1[i];
		i++;
	}
	while (s2)
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
