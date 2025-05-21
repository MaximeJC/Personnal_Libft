#include "libft.h"

int	ft_putendl_fd(char *s, int fd)
{
	int	str_len;

	str_len = ft_putstr_fd(s, fd);
	str_len += ft_putchar_fd('\n', fd);
	return (str_len);
}
