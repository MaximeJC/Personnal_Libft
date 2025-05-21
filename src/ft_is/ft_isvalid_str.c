#include "libft.h"

int	ft_isvalid_str(const char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] != 0)
	{
		if (!ft_iswhitespace(str[i]))
			return (1);
		i++;
	}
	return (0);
}
