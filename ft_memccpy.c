#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*newdst;
	unsigned char		*newsrc;
	size_t				i;

	newdst = (unsigned char*)dst;
	newsrc = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		newdst[i] = newsrc[i];
		if (newdst[i] == (unsigned char)c)
			return ((void*)(dst + i + 1));
		i++;
	}
	return (NULL);
}
