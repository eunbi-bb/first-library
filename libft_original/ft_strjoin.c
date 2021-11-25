#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	len_1;
	unsigned int	len_2;
	char			*str;

	if (!s1 || !s2)
		return (NULL);
	len_1 = ft_strlen(s1);
	len_2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (len_1 + len_2 + 1));
	if (!str)
		return (NULL);
	ft_memcpy(str, (char *)s1, len_1);
	ft_memcpy(str + len_1, (char *)s2, len_2);
	str[len_1 + len_2] = '\0';
	return (str);
}