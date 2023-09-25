#include <stdlib.h>

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void*));
t_list	ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

itypedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/*
Allocates (with malloc(3)) and returns a new node.
The member variable ’content’ is initialized with
the value of the parameter ’content’. The variable
’next’ is initialized to NULL.
content: The content to create the node with.
Return value The new node
*/
t_list	*ft_lstnew(void *content)
{
	return (0);
}

/*
Adds the node ’new’ at the beginning of the list.
lst: The address of a pointer to the first link of
a list.
new: The address of a pointer to the node to be
added to the list
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{

}

/*
Counts the number of nodes in a list.
lst: The beginning of the list.
Return value The length of the list
*/
int	ft_lstsize(t_list *lst)
{

}

/*
Returns the last node of the list.
lst: The beginning of the list.
Return value Last node of the list
*/
t_list	ft_lstlast(t_list *lst)
{

}

/*
Adds the node ’new’ at the end of the list
lst: The address of a pointer to the first link of
a list.
new: The address of a pointer to the node to be
added to the list.
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{

}

/*
Takes as a parameter a node and frees the memory of
the node’s content using the function ’del’ given
as a parameter and free the node. The memory of
’next’ must not be freed
lst: The node to free.
del: The address of the function used to delete
the content.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{

}

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

}

/*
Iterates the list ’lst’ and applies the function
’f’ on the content of each node.
lst: The address of a pointer to a node.
f: The address of the function used to iterate on
the list.
*/
void	ft_lstiter(t_list *lst, void (*f)(void*))
{

}

/*
Iterates the list ’lst’ and applies the function
’f’ on the content of each node. Creates a new
list resulting of the successive applications of
the function ’f’. The ’del’ function is used to
delete the content of a node if needed.
lst: The address of a pointer to a node.
f: The address of the function used to iterate on
the list.
del: The address of the function used to delete
the content of a node if needed.
Return value The new list.
NULL if the allocation fails.
*/
t_list	ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{

}

int	main(void)
{
	return (0);
}
