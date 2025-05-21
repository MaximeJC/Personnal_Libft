#include "libft.h"

void	ft_strtab_free(char **strtab)
{
	int	i;
	int	size;

	if (strtab == NULL)
		return ;
	i = 0;
	size = ft_strtab_size(strtab);
	while (i < size)
	{
		free(strtab[i]);
		i++;
	}
	free(strtab);
}
