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
