/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouraud <mgouraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:52:55 by mgouraud          #+#    #+#             */
/*   Updated: 2024/12/30 16:33:47 by mgouraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*ptr_s1;
	const unsigned char	*ptr_s2;
	size_t				i;

	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (ptr_s1[i] == ptr_s2[i] && i < (n - 1))
	{
		if (ptr_s1[i] == '\0' || ptr_s2[i] == '\0')
			break ;
		i++;
	}
	return (ptr_s1[i] - ptr_s2[i]);
}
