/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouraud <mgouraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:54:16 by mgouraud          #+#    #+#             */
/*   Updated: 2024/12/30 15:52:00 by mgouraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
