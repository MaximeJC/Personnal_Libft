/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouraud <mgouraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:20:09 by mgouraud          #+#    #+#             */
/*   Updated: 2024/12/30 16:31:56 by mgouraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_newlst_clear(t_list **start, void (*del)(void *));
static void	ft_lstnxt(t_list **srt, t_list *new_el, t_list **el, t_list **lst);

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*el;
	t_list	*new_el;
	void	*content;

	el = NULL;
	new_el = NULL;
	start = NULL;
	content = NULL;
	while (lst != NULL)
	{
		content = f(lst->content);
		if (content == NULL)
			return (ft_newlst_clear(&start, del));
		new_el = ft_lstnew(content);
		if (new_el == NULL)
		{
			free(content);
			return (ft_newlst_clear(&start, del));
		}
		ft_lstnxt(&start, new_el, &el, &lst);
	}
	return (start);
}

static void	*ft_newlst_clear(t_list **start, void (*del)(void *))
{
	if (start)
		ft_lstclear(start, del);
	return (NULL);
}

static void	ft_lstnxt(t_list **srt, t_list *new_el, t_list **el, t_list **lst)
{
	if (*srt == NULL)
		*srt = new_el;
	else if ((*srt)->next == NULL)
		(*srt)->next = new_el;
	if (*el != NULL)
		(*el)->next = new_el;
	*el = new_el;
	*lst = (*lst)->next;
}
