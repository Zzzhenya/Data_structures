#include "liblist.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
int main(void)
{
	t_list *head;
	t_list *current;
	t_list **lst;
	t_list	*new;

	head = ft_lstnew((void *)10);
	head->next = ft_lstnew((void *)20);
	new = ft_lstnew((void *)30);
	*lst = head;
	new = ft_lstnew((void *)30);
	ft_lstadd_front(lst, new);
    current = *lst;
    while (current != NULL)
    {
    	printf("%zu\n", (size_t)current->content);
        current = current->next;
    }
	return (0);
}
*/