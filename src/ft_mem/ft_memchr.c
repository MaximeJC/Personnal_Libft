/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouraud <mgouraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:18:05 by mgouraud          #+#    #+#             */
/*   Updated: 2024/12/30 16:32:23 by mgouraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr_s;
	unsigned char		ch;
	size_t				i;

	ptr_s = s;
	ch = c;
	i = 0;
	while (i < n)
	{
		if (ptr_s[i] == ch)
			return (((char *)s) + i);
		i++;
	}
	return (NULL);
}
