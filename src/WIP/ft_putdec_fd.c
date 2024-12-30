/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdec_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouraud <mgouraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:11:10 by mgouraud          #+#    #+#             */
/*   Updated: 2024/12/30 16:32:54 by mgouraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putdec_fd(double n, int fd)
{
	int	nbr_len;
	int	i;

	nbr_len = 0;
	nbr_len += ft_putnbr_fd(n, fd);
	nbr_len += ft_putchar_fd('.', fd);
	n = n - (double)((int)n);
	n *= 1000000;
	if (n < 0)
		n *= -1;
	if (n - (double)((int)n) >= 0.5)
		n += 1;
	i = 6;
	while (i-- > 1)
	{
		if (n > ft_pow(10, i))
			break ;
		nbr_len += ft_putchar_fd('0', fd);
	}
	nbr_len += ft_putnbr_fd(n, fd);
	return (nbr_len);
}
