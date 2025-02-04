/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouraud <mgouraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:32:13 by mgouraud          #+#    #+#             */
/*   Updated: 2025/02/04 13:57:00 by mgouraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	strsjoin_utils(int nb, va_list args, char **str);

char	*ft_strsjoin(int nb, ...)
{
	char	*str;
	va_list	args;

	str = NULL;
	va_start(args, nb);
	str = ft_strjoin(va_arg(args, char *), va_arg(args, char *));
	if (str == NULL)
	{
		va_end(args);
		return (NULL);
	}
	if (strsjoin_utils(nb, args, &str))
	{
		va_end(args);
		return (NULL);
	}
	va_end(args);
	return (str);
}

static int	strsjoin_utils(int nb, va_list args, char **str)
{
	int		i;
	char	*temp_str;

	i = 2;
	temp_str = NULL;
	while (i < nb)
	{
		temp_str = ft_strjoin(*str, va_arg(args, char *));
		free(*str);
		if (temp_str == NULL)
		{
			va_end(args);
			return (1);
		}
		*str = ft_strdup(temp_str);
		free(temp_str);
		if (str == NULL)
		{
			va_end(args);
			return (1);
		}
		i++;
	}
	return (0);
}

//! Be sure to turn in non-null strings and the correct nb of elements to join
