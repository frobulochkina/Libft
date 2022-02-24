#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *news1;
	unsigned char *news2;

	news1 = (unsigned char*)s1;
	news2 = (unsigned char*)s2;
	while (n > 0)
	{
		if (*news1 != *news2)
			return (*news1 - *news2);
		news1++;
		news2++;
		n--;
	}
	return (0);
}
