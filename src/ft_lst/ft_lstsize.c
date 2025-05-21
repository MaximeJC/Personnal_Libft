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
