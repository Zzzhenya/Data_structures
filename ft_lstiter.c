#include "liblist.h"

/*
Iterates the list ’lst’ and applies the function
’f’ on the content of each node.
lst: The address of a pointer to a node.
f: The address of the function used to iterate on
the list.
*/
void	ft_lstiter(t_list *lst, void (*f)(void*))
{
	while (lst)
	{
		(f)(lst->content);
		lst = lst->next;
	}
}