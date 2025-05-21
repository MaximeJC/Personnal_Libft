#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char		*ptr;
	size_t		i;

	i = nmemb * size;
	ptr = malloc(i);
	if (ptr == NULL)
		return (NULL);
	while (i--)
		ptr[i] = 0;
	return ((void *)ptr);
}
