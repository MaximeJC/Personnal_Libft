#include "libft.h"

char	*ft_strndup(const char *src, size_t len)
{
	size_t	i;
	char	*dest;

	i = 0;
	if (src == NULL)
		return (NULL);
	dest = ft_calloc(ft_min((int)len, ft_strlen(src)) + 1, sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (i < len && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
