/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouraud <mgouraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:54:52 by mgouraud          #+#    #+#             */
/*   Updated: 2024/10/21 19:14:24 by mgouraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	s_len;
	size_t	i;

	s_len = 0;
	i = 0;
	while (s[s_len])
		s_len++;
	if (start >= s_len || len == 0)
		str = malloc(1);
	else if (start + len < s_len)
		str = malloc(len + 1);
	else
		str = malloc(s_len - start + 1);
	if (str == NULL)
		return (NULL);
	while ((start >= s_len || len == 0) == 0 && i < len && s[i + start] != '\0')
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}
