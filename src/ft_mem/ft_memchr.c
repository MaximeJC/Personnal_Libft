#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr_s;
	unsigned char		ch;
	size_t				i;

	ptr_s = s;
	ch = c;
	i = 0;
	while (i < n)
	{
		if (ptr_s[i] == ch)
			return (((char *)s) + i);
		i++;
	}
	return (NULL);
}
