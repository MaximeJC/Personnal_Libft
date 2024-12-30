/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouraud <mgouraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:26:58 by mgouraud          #+#    #+#             */
/*   Updated: 2024/12/30 16:32:30 by mgouraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*ptr_src;
	unsigned char		*ptr_dest;

	ptr_src = src;
	ptr_dest = dest;
	if (dest == NULL && src == NULL)
		return (dest);
	while (n--)
		*ptr_dest++ = *ptr_src++;
	return (dest);
}
