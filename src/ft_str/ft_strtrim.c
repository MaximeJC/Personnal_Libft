/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouraud <mgouraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:00:42 by mgouraud          #+#    #+#             */
/*   Updated: 2024/12/30 16:34:04 by mgouraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isinset(char c, char const *set);
static void	ft_getstr(char *str, char const *s1, char const *set, int str_len);
static int	ft_getstrlen(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		str_len;
	char	*str;

	str = "";
	str_len = ft_getstrlen(s1, set);
	if (str_len == 0)
	{
		str = ft_calloc(1, sizeof(char));
		if (str == NULL)
			return (NULL);
		return (str);
	}
	str = ft_calloc(str_len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_getstr(str, s1, set, str_len);
	return (str);
}

static int	ft_getstrlen(char const *s1, char const *set)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s1[i] && ft_isinset(s1[i], set))
		i++;
	while (s1[i])
	{
		len++;
		i++;
	}
	i--;
	while (i >= 0 && ft_isinset(s1[i], set) && len != 0)
	{
		len--;
		i--;
	}
	return (len);
}

static int	ft_isinset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static void	ft_getstr(char *str, char const *s1, char const *set, int str_len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] && ft_isinset(s1[i], set))
		i++;
	while (s1[i] && str_len > 0)
	{
		str[j] = s1[i];
		i++;
		j++;
		str_len--;
	}
}
