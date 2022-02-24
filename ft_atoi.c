#include "libft.h"

int	ft_atoi(char *str)
{
	int					minuses;
	unsigned long int	number;

	minuses = 0;
	number = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' ||
		*str == '\v' || *str == '\f' || *str == '\r')
		str++;
	minuses = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minuses = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10 + (*str - '0');
		str++;
		if (number > 922337036854775807 && minuses == -1)
			return (0);
		if (number > 922337036854775807)
			return (-1);
	}
	return (number * minuses);
}
