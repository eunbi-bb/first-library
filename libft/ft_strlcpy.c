#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (!dst || !src)
		return (0);
	if (size > 0)
	{
		while (i < len && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}
