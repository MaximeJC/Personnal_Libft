#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst_el;
	t_list	*lst_next_el;

	lst_next_el = *lst;
	while (lst_next_el != NULL)
	{
		lst_el = lst_next_el;
		del(lst_el->content);
		lst_next_el = lst_el->next;
		free(lst_el);
	}
	*lst = NULL;
}
