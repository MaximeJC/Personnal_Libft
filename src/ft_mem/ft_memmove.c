/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouraud <mgouraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:44:32 by mgouraud          #+#    #+#             */
/*   Updated: 2024/12/30 16:32:34 by mgouraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*ptr_src;
	unsigned char		*ptr_dest;

	ptr_src = src;
	ptr_dest = dest;
	if (dest == NULL && src == NULL)
		return (dest);
	if (ptr_dest <= ptr_src)
	{
		while (n--)
			*ptr_dest++ = *ptr_src++;
	}
	else
	{
		ptr_dest += n - 1;
		ptr_src += n - 1;
		while (n--)
			*ptr_dest-- = *ptr_src--;
	}
	return (dest);
}
