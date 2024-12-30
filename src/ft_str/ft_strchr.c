/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouraud <mgouraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:45:15 by mgouraud          #+#    #+#             */
/*   Updated: 2024/12/30 16:33:08 by mgouraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ch;
	size_t			i;

	i = 0;
	ch = c;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			return (((char *)s) + i);
		i++;
	}
	if (s[i] == '\0' && ch == '\0')
		return (((char *)s) + i);
	return (NULL);
}
