/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouraud <mgouraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:58:11 by mgouraud          #+#    #+#             */
/*   Updated: 2024/12/30 15:58:17 by mgouraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_base_fd(unsigned long nbr, char *base, int fd)
{
	char	*output;
	int		base_len;
	int		i;
	int		print_len;
	int		j;

	i = 0;
	print_len = 0;
	if (nbr == 0)
		return (ft_putchar_fd(base[0], fd));
	output = ft_calloc(65, 1);
	if (output == NULL)
		return (0);
	base_len = ft_strlen(base);
	while (nbr != 0)
	{
		output[i] = base[(nbr % base_len)];
		nbr = nbr / base_len;
		i++;
	}
	j = i;
	while (j-- > 0)
		print_len += ft_putchar_fd(output[j], fd);
	free (output);
	return (print_len);
}
