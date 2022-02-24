#include "libft.h"

static	char	ft_strtrimi(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != 0)
		i++;
	return (i);
}

static	char	ft_strtrimj(char const *s1, char const *set)
{
	int		j;

	j = ft_strlen(s1) - 1;
	while (j > 0 && ft_strchr(set, s1[j]) != 0)
		j--;
	return (j);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*news;

	if (!s1 || !set)
		return (NULL);
	i = ft_strtrimi(s1, set);
	j = ft_strtrimj(s1, set);
	if (ft_strlen(s1) == i && j == 0)
		return (ft_strdup("\0"));
	news = ft_substr(s1, i, j - i + 1);
	return (news);
}
