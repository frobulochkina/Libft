#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sym;

	sym = (unsigned char*)s;
	while (n > 0)
	{
		n--;
		if (*sym == (unsigned char)c)
			return (sym);
		sym++;
	}
	return (NULL);
}
