/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsecondtolast.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouraud <mgouraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:33:09 by mgouraud          #+#    #+#             */
/*   Updated: 2025/01/08 16:47:42 by mgouraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstsecondtolast(t_list *lst)
{
	t_list	*stlast_el;
	t_list	*last_el;

	if (lst == NULL || lst->next == NULL)
		return (NULL);
	stlast_el = lst;
	last_el = lst->next;
	while (last_el->next != NULL)
	{
		stlast_el = last_el;
		last_el = stlast_el->next;
	}
	return (stlast_el);
}
