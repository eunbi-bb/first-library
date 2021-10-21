#include "libft.h"
#include<stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*p;
	char			*str;
	unsigned int	len;

	p = ft_strchr(s1, (int)set);
	len = ft_strlen(s1) - ft_strlen(p);
	while (*s1++ < len)
	{
		*str++ = *s1++;
		ft_strdup(str);
	}
	return ((char *)str);
}

int	main(void)
{
	char	*s1;
	char	*set;

	s1 = "Hello, I'm Eunbi.";
	set = ",";
	printf("%s", ft_strtrim(s1, set));
	return (0);
}
