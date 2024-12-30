/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouraud <mgouraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:29:09 by mgouraud          #+#    #+#             */
/*   Updated: 2024/12/30 16:33:16 by mgouraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int		i;
	unsigned int		len;

	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		(*f)(i, &s[i]);
		i++;
	}
}
