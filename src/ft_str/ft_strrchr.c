#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	ch;
	size_t			i;

	i = ft_strlen(s);
	ch = c;
	if (s[i] == '\0' && ch == '\0')
		return (((char *)s) + i);
	while (i-- > 0)
	{
		if (s[i] == ch)
			return (((char *)s) + i);
	}
	return (NULL);
}
