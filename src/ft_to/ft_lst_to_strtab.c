/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_to_strtab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouraud <mgouraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 15:55:07 by mgouraud          #+#    #+#             */
/*   Updated: 2025/04/23 15:52:13 by mgouraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_lst_to_strtab(t_list *lst)
{
	char	**str_tab;
	int		i;
	t_list	*el;
	char	*str;

	el = lst;
	i = 0;
	str_tab = ft_calloc(ft_lstsize(lst) + 1, sizeof(char *));
	if (str_tab)
	{
		while (el)
		{
			str = ft_strdup((char *)el->content);
			if (!str)
				break ;
			str_tab[i] = str;
			str = NULL;
			i++;
			el = el->next;
		}
		str_tab[i] = NULL;
	}
	return (str_tab);
}
