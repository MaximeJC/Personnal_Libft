#include "libft.h"

int	ft_putptr_fd(void *ptr, int fd)
{
	int			print_len;
	uintptr_t	ptr_adr;

	print_len = 0;
	if (ptr == NULL)
		return (ft_putstr_fd("(nil)", fd));
	ptr_adr = (uintptr_t)ptr;
	print_len += ft_putstr_fd("0x", fd);
	print_len += ft_putnbr_base_fd(ptr_adr, HEX_LOWER_BASE, fd);
	return (print_len);
}
