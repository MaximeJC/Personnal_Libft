/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouraud <mgouraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:30:46 by mgouraud          #+#    #+#             */
/*   Updated: 2025/04/23 15:41:31 by mgouraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *src, size_t len)
{
	size_t	i;
	char	*dest;

	i = 0;
	if (src == NULL)
		return (NULL);
	dest = ft_calloc(ft_min((int)len, ft_strlen(src)) + 1, sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (i < len && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
