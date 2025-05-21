#include "libft.h"

int	ft_isnumber(char *str)
{
	int	i;

	i = 0;
	if (!ft_isvalid_str(str))
		return (0);
	while (ft_iswhitespace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
		{
			while (ft_iswhitespace(str[i]))
				i++;
			if (str[i] != '\0')
				return (0);
			return (1);
		}
		i++;
	}
	return (1);
}
