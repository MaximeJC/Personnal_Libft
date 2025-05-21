#include "libft.h"

int	ft_putlnbr_fd(long n, int fd)
{
	int	nbr_len;

	nbr_len = 0;
	if (n == LONG_MIN)
		return (ft_putstr_fd("-9223372036854775808", fd));
	if (n < 0)
	{
		nbr_len += ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n > 9)
		nbr_len += ft_putlnbr_fd(n / 10, fd);
	nbr_len += ft_putchar_fd((n % 10) + '0', fd);
	return (nbr_len);
}
