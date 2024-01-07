#include "libft.h"

// Adds the node ’new’ at the end of the list.
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *tmp;

	if (!lst || !new)
		return ;

	if (!*lst)
	{
		*lst = new;
		return ;
	}

	tmp = *lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
	tmp->next->next = NULL;
}
