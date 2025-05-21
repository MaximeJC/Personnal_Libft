#include "libft.h"

int	ft_strtab_size(char **strtab)
{
	int	size;

	size = 0;
	while (strtab != NULL && strtab[size] != NULL)
	{
		size++;
	}
	return (size);
}
