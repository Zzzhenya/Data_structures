#include "liblist.h"

void	del(void *ptr)
{
	if (ptr)
	{
		ptr = 0;
	}
}

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
	lst = NULL;
}


int main(void)
{
	t_list *head;
	t_list *current;
	t_list **lst;
	t_list	*last;
	int   size;

	head = ft_lstnew((void *)20);
	head->next = ft_lstnew((void *)30);
	*lst = head;
	ft_lstadd_front(lst, ft_lstnew((void *)10));
	ft_lstadd_back(lst, ft_lstnew((void *)40));
    current = *lst;
    size = ft_lstsize(*lst);
    printf("size: %d\n", size);
    while (current != NULL)
    {
    	printf("%zu\n", (size_t)current->content);
        current = current->next;
    }
    last = ft_lstlast(*lst);
    printf("last: %zu\n", (size_t)(last->content));
    
    current = *lst;
    ft_lstdelone(last, del);
    
    while (size>0)
    {
    	printf("%zu\n", (size_t)current->content);
        current = current->next;
        size --;
    }
    /*
    while (current != NULL)
    {
    	printf("%zu\n", (size_t)current->content);
        current = current->next;
    }
    */
	return (0);
}