#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char unsigned		*newdst;
	const unsigned char	*newsrc;

	newdst = (unsigned char*)dst;
	newsrc = (const unsigned char*)src;
	if (n == 0 || dst == src)
		return (dst);
	if (newsrc <= newdst)
		while (n--)
			newdst[n] = newsrc[n];
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
