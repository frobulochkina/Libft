#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*news;
	size_t	i;

	if (s == 0)
		return (NULL);
	i = 0;
	news = ft_substr(s, 0, ft_strlen(s));
	if (!news)
		return (NULL);
	while (news[i])
	{
		news[i] = (*f)(i, news[i]);
		i++;
	}
	news[i] = '\0';
	return (news);
}
