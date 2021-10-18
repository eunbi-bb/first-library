// #include "libft.h"

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*str;
// 	size_t	i;

// 	i = 0;
// 	if (start == 0 && start > ft_strlen(s))
// 		return (NULL);
// 	if (!((char *)malloc(sizeof(char) * (len + 1))))
// 		return (NULL);
// 	while (s[i] && i < len)
// 	{
// 		str[i] = s[start];
// 		i++;
// 		start++;
// 	}
// 	str[i] = '\0';
// 	return (str);
// }
