#include "libft.h"

static int	ft_prtformat(char c, va_list args);

int	ft_printf(const char *str, ...)
{
	int		i;
	int		print_len;
	va_list	args;

	i = 0;
	print_len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_len += ft_prtformat(str[i + 1], args);
			i++;
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			print_len++;
		}
		i++;
	}
	va_end(args);
	return (print_len);
}

static int	ft_prtformat(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar_fd(va_arg(args, int), 1));
	else if (c == 's')
		return (ft_putstr_fd(va_arg(args, char *), 1));
	else if (c == 'p')
		return (ft_putptr_fd(va_arg(args, void *), 1));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr_fd(va_arg(args, int), 1));
	else if (c == 'u')
		return (ft_putlnbr_fd(va_arg(args, unsigned int), 1));
	else if (c == 'x')
		return (ft_putnbr_base_fd(va_arg(args, unsigned int),
				HEX_LOWER_BASE, 1));
	else if (c == 'X')
		return (ft_putnbr_base_fd(va_arg(args, unsigned int),
				HEX_UPPER_BASE, 1));
	else if (c == '%')
		return (ft_putchar_fd('%', 1));
	else
		ft_putstr_fd("/!\\ [Ft_Printf] Argument error /!\\", 2);
	return (0);
}
