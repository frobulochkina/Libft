#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	j;

	j = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		if (!(subs = (char *)malloc(sizeof(char) * 1)))
			return (NULL);
		subs[0] = '\0';
		return (subs);
	}
	else if (ft_strlen(s) < len ||
	(!(subs = (char *)malloc(sizeof(char) * len + 1))))
	{
		if (!(subs = (char *)malloc(sizeof(char) * (ft_strlen(s) - start) + 1)))
			return (NULL);
	}
	while (s[start] && j < len)
		subs[j++] = s[start++];
	subs[len] = '\0';
	return (subs);
}
