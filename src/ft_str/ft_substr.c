/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouraud <mgouraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:54:52 by mgouraud          #+#    #+#             */
/*   Updated: 2024/10/30 15:07:47 by mgouraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(s);
	i = 0;
	if (start >= s_len || len == 0)
		str = ft_calloc(1, 1);
	else if (start + len < s_len)
		str = ft_calloc(1, len + 1);
	else
		str = ft_calloc(1, s_len - start + 1);
	if (str == NULL)
		return (NULL);
	while ((start >= s_len || len == 0) == 0 && i < len && s[i + start] != '\0')
	{
		str[i] = s[i + start];
		i++;
	}
	return (str);
}
