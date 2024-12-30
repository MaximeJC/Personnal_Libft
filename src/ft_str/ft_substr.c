/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouraud <mgouraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:54:52 by mgouraud          #+#    #+#             */
/*   Updated: 2024/12/30 16:34:08 by mgouraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(s);
	i = 0;
	if (start >= s_len || len == 0)
		str = ft_calloc(1, sizeof(char));
	else if (start + len < s_len)
		str = ft_calloc(len + 1, sizeof(char));
	else
		str = ft_calloc(s_len - start + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	while ((start >= s_len || len == 0) == 0 && i < len && s[i + start] != '\0')
	{
		str[i] = s[i + start];
		i++;
	}
	return (str);
}
