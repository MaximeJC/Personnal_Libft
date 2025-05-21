#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr_s1;
	const unsigned char	*ptr_s2;
	size_t				i;

	ptr_s1 = s1;
	ptr_s2 = s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < (n - 1))
	{
		if (ptr_s1[i] != ptr_s2[i])
			break ;
		i++;
	}
	return (ptr_s1[i] - ptr_s2[i]);
}
