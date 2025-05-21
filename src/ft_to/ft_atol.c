#include "libft.h"

long	ft_atol(const char *nptr)
{
	int		i;
	long	num;
	long	sign;

	i = 0;
	num = 0;
	sign = 1;
	while (ft_iswhitespace(nptr[i]))
		i++;
	if (nptr[i] == '-')
		sign *= -1;
	if (nptr[i] == '+' || nptr[i] == '-')
		i++;
	while (ft_isdigit(nptr[i]))
	{
		num *= 10;
		num += (nptr[i] - '0') * sign;
		i++;
	}
	return (num);
}
