/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouraud <mgouraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 09:54:54 by mgouraud          #+#    #+#             */
/*   Updated: 2024/10/30 15:08:37 by mgouraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char		*ptr;
	size_t		i;

	i = nmemb * size;
	ptr = malloc(i);
	if (ptr == NULL)
		return (NULL);
	while (i--)
		ptr[i] = 0;
	return ((void *)ptr);
}
