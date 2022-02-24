#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*newdst;
	const unsigned char	*newsrc;
	size_t				i;

	newdst = (unsigned char*)dst;
	newsrc = (const unsigned char*)src;
	i = 0;
	if (src == 0 && dst == 0)
		return (0);
	while (i < n)
	{
		*newdst = *newsrc;
		i++;
		newdst++;
		newsrc++;
	}
	return (dst);
}
