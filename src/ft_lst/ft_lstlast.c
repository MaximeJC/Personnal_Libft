/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouraud <mgouraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:33:09 by mgouraud          #+#    #+#             */
/*   Updated: 2024/10/30 15:08:49 by mgouraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lst_el;

	if (lst == NULL)
		return (NULL);
	lst_el = lst;
	while (lst_el->next != NULL)
		lst_el = lst_el->next;
	return (lst_el);
}
