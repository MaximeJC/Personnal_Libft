#include "libft.h"

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
