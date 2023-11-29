#include "liblist.h"

/*
Returns the last node of the list.
lst: The beginning of the list.
Return value Last node of the list
*/
t_list	ft_lstlast(t_list *lst)
{
	while (lst != 0)
	{
		if (lst->next == 0)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}