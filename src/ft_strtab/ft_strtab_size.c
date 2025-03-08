/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtab_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouraud <mgouraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 15:05:21 by mgouraud          #+#    #+#             */
/*   Updated: 2025/03/08 10:38:05 by mgouraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strtab_size(char **strtab)
{
	int	size;

	size = 0;
	while (strtab != NULL && strtab[size] != NULL)
	{
		size++;
	}
	return (size);
}
