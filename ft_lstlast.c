#include "libft.h"

// Returns the last node of the list.
t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL)
		lst++;
	return (lst);
}
