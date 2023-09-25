#include "liblist.h"

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
    t_list  *node;

    node = malloc (sizeof(t_list));
    if (node == NULL)
        return (NULL);
    node->content = content;
    node->next = NULL;
    return (node);
}
