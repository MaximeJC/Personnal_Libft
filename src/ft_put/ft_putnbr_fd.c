/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouraud <mgouraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:03:43 by mgouraud          #+#    #+#             */
/*   Updated: 2024/12/30 15:51:17 by mgouraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	int	nbr_len;

	nbr_len = 0;
	if (n == INT_MIN)
		return (ft_putstr_fd("-2147483648", fd));
	if (n < 0)
	{
		nbr_len += ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n > 9)
		nbr_len += ft_putnbr_fd(n / 10, fd);
	nbr_len += ft_putchar_fd((n % 10) + '0', fd);
	return (nbr_len);
}
