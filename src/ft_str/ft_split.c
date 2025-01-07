/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouraud <mgouraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 05:58:10 by mgouraud          #+#    #+#             */
/*   Updated: 2025/01/07 13:15:26 by mgouraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getnbstr(char const *s, char c);
static int	ft_settabstr(char const *s, char c, char **tab_str, int *i);
static int	ft_getstrlen(char const *s, char c, int j);

char	**ft_split(char const *s, char c)
{
	char	**tab_str;
	int		nb_str;
	int		params[2];

	params[0] = 0;
	params[1] = 0;
	nb_str = ft_getnbstr(s, c);
	tab_str = malloc((nb_str + 1) * sizeof(char *));
	if (tab_str == NULL)
		return (NULL);
	while (params[0] < nb_str)
	{
		if (ft_settabstr(s, c, tab_str, params))
			return (NULL);
		params[0]++;
	}
	tab_str[params[0]] = NULL;
	return (tab_str);
}

static int	ft_getnbstr(char const *s, char c)
{
	int	i;
	int	nb;

	i = 0;
	if (s[0] == '\0')
		return (0);
	while (s[i] == c)
		i++;
	if (s[i] == '\0')
		return (0);
	nb = 1;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != '\0' && s[i + 1] != c)
			nb++;
		i++;
	}
	return (nb);
}

static int	ft_getstrlen(char const *s, char c, int j)
{
	int	i;

	i = 0;
	while (s[i + j] != c && s[i + j] != '\0')
		i++;
	return (i);
}

static int	ft_settabstr(char const *s, char c, char **tab_str, int *prm)
{
	int	k;

	k = 0;
	while (s[prm[1]] == c)
		prm[1]++;
	tab_str[prm[0]] = ft_calloc(ft_getstrlen(s, c, prm[1]) + 1, sizeof(char));
	if (tab_str[prm[0]] == NULL)
	{
		while (prm[0]-- > 0)
			free(tab_str[prm[0]]);
		free(tab_str);
		return (1);
	}
	while (s[prm[1]] != c && s[prm[1]] != '\0')
	{
		tab_str[prm[0]][k] = s[prm[1]];
		prm[1]++;
		k++;
	}
	tab_str[prm[0]][k] = '\0';
	return (0);
}
