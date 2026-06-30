#include "list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int	tmp;
	t_list	*curr = lst;

	tmp = 0;
	while (lst->next)
	{
		if (cmp(lst->data, lst->next->data) == 0)
		{
			tmp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = tmp;
			lst = curr;
		}
		else
			lst = lst->next;
	}
	lst = curr;
	return (lst);
}