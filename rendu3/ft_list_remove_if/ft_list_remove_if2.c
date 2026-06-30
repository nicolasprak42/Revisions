#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
	int (*cmp)(void *, void *), void (*free_fct)(void *))
{
	t_list	*current;
	t_list	*tmp;

	while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
	{
		tmp = *begin_list;
		*begin_list = (*begin_list)->next;
		free_fct(tmp->data);
		free(tmp);
	}
	current = *begin_list;
	while (current && current->next)
	{
		if (cmp(current->next->data, data_ref) == 0)
		{
			tmp = current->next;
			current->next = tmp->next;
			free_fct(tmp->data);
			free(tmp);
		}
		else
			current = current->next;
	}
}
