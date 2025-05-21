#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		src_len;
	char	*dest;
	int		i;

	src_len = ft_strlen(src);
	i = 0;
	if (src == NULL)
		return (NULL);
	dest = ft_calloc(src_len + 1, sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
