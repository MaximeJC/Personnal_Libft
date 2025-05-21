#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*ptr_src;
	unsigned char		*ptr_dest;

	ptr_src = src;
	ptr_dest = dest;
	if (dest == NULL && src == NULL)
		return (dest);
	while (n--)
		*ptr_dest++ = *ptr_src++;
	return (dest);
}
