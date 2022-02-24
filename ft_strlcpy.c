#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t newdstsize;

	i = 0;
	newdstsize = 0;
	if (dst == 0)
		return (0);
	while (src[newdstsize] != '\0')
	{
		newdstsize++;
	}
	if (dstsize == 0)
	{
		return (newdstsize);
	}
	while (src[i] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (newdstsize);
}
