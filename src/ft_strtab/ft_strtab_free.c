/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtab_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouraud <mgouraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 15:09:24 by mgouraud          #+#    #+#             */
/*   Updated: 2025/01/31 15:31:08 by mgouraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strtab_free(char **strtab)
{
	int	i;
	int	size;

	if (strtab == NULL)
		return ;
	i = 0;
	size = ft_strtab_size(strtab);
	while (i < size)
	{
		free(strtab[i]);
		i++;
	}
	free(strtab);
}
