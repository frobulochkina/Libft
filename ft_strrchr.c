#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int strl;

	strl = ft_strlen((char*)s);
	while (strl >= 0)
	{
		if ((int)s[strl] == c)
			return (char*)&s[strl];
		strl--;
	}
	return (NULL);
}
