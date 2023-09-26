#include "liblist.h"

/*
Deletes and frees the given node and every
successor of that node, using the function ’del’
and free(3).
Finally, the pointer to the list must be set to
NULL.
lst: The address of a pointer to a node.
del: The address of the function used to delete
the content of the node.
*/
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*old_ele;

	if (!del)
		return (0);
	while (*lst)
	{
		del((*lst)->content);
		old_elm = *lst;
		*lst = old_elm->next;
		free(old_elm);
	}
	*lst = 0;
}