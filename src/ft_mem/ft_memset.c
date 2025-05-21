#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr_s;

	ptr_s = s;
	while (n--)
		*ptr_s++ = c;
	return (s);
}
