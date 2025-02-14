/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrncmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouraud <mgouraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 16:34:36 by mgouraud          #+#    #+#             */
/*   Updated: 2025/02/14 17:11:50 by mgouraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strrncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*ptr_s1;
	const unsigned char	*ptr_s2;
	size_t				i;
	size_t				j;

	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	if (n == 0 || i == 0 || j == 0)
		return (0);
	i--;
	j--;
	while (ptr_s1[i] == ptr_s2[j] && n > 1)
	{
		if (i == 0 || j == 0)
			break ;
		i--;
		j--;
		n--;
	}
	return (ptr_s1[i] - ptr_s2[j]);
}
