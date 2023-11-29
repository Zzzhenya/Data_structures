#include "liblist.h"

/*
Adds the node ’new’ at the end of the list
lst: The address of a pointer to the first link of
a list.
new: The address of a pointer to the node to be
added to the list.
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (*lst == 0)
		*lst = new;
	else
	{
		ptr = *lst;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new;
	}
}