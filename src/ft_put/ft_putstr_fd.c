#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	str_len;

	if (s == NULL)
		return (ft_putstr_fd("(null)", fd));
	str_len = ft_strlen(s);
	write(fd, s, str_len);
	return (str_len);
}
