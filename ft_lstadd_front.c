#include "libft.h"

// Adds the node ’new’ at the beginning of the list.
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}


// new->next = *lst;
// *lst = new; aalatzas

// if (new != NULL)
// {
// 	new->next = *lst;
// 	*lst = new;
// } freddy

// if (!lst || !new)
// 	return ;
// new->next = *lst;
// *lst = new; wleite

// t_list *tmp;

// if (*lst == NULL)
// {
// 	*lst = new;
// 	return;
// }
// tmp = *lst;
// *lst = new;
// new -> next = tmp;  istanbul

// if (lst && new)
// {
// 	new->next = *lst;
// 	*lst = new;
// }  awoimbee