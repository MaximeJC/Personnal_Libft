/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouraud <mgouraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:50:57 by mgouraud          #+#    #+#             */
/*   Updated: 2024/12/30 16:32:26 by mgouraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr_s1;
	const unsigned char	*ptr_s2;
	size_t				i;

	ptr_s1 = s1;
	ptr_s2 = s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < (n - 1))
	{
		if (ptr_s1[i] != ptr_s2[i])
			break ;
		i++;
	}
	return (ptr_s1[i] - ptr_s2[i]);
}
