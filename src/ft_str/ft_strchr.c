#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ch;
	size_t			i;

	i = 0;
	ch = c;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			return (((char *)s) + i);
		i++;
	}
	if (s[i] == '\0' && ch == '\0')
		return (((char *)s) + i);
	return (NULL);
}
