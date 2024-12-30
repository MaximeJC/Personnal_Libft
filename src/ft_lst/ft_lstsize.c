/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouraud <mgouraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:35:59 by mgouraud          #+#    #+#             */
/*   Updated: 2024/12/30 16:32:03 by mgouraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*lst_el;

	if (lst == NULL)
		return (0);
	lst_el = lst;
	size = 1;
	while (lst_el->next != NULL)
	{
		size++;
		lst_el = lst_el->next;
	}
	return (size);
}
