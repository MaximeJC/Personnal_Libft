/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouraud <mgouraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:19:46 by mgouraud          #+#    #+#             */
/*   Updated: 2024/12/30 16:33:56 by mgouraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	ch;
	size_t			i;

	i = ft_strlen(s);
	ch = c;
	if (s[i] == '\0' && ch == '\0')
		return (((char *)s) + i);
	while (i-- > 0)
	{
		if (s[i] == ch)
			return (((char *)s) + i);
	}
	return (NULL);
}
