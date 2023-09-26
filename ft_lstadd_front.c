#include "liblist.h"

/*
Adds the node ’new’ at the beginning of the list.
lst: The address of a pointer to the first link of
a list.
new: The address of a pointer to the node to be
added to the list
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
