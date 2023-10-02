#include "liblist.h"

void	del(void *ptr)
{
	if (ptr)
	{
        free (ptr);
        ptr = 0;
	}
}

void    *ft_multiplier(void  *content)
{
    int *temp;

    temp = malloc (sizeof(int) * 1);
    if (!temp)
        return (0);
    *temp =  *(int *)content * 1000;
    del (content);
    return ((void *)temp);
}

/*
void    ft_lstiter(t_list *lst, void (*f)(void *))
{
    while (lst)
    {
        (f)(lst->content);
        lst = lst->next;
    }
}
*/
t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list	*new_lst;
	t_list	*new_elm;

	if (!f || !del)
		return (0);
	new_lst = 0;
	while (lst)
	{
		if (!(new_elm == ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		ft_lstadd_back(&new_lst, new_elm);
		lst = lst->next;
	}
	return (new_lst);
}

int main(void)
{
	t_list *head;
	t_list *current;
	t_list **lst;
	t_list	*last;
	int   size;

    int     *one;
    int     *two;
    int     *three;
    int     *four;

    one = (int  *)malloc(sizeof(int) * 1);
    two = (int  *)malloc(sizeof(int) * 1);
    three = (int  *)malloc(sizeof(int) * 1);
    four = (int  *)malloc(sizeof(int) * 1);

    *one = 20;
    *two = 30;
    *three = 10;
    *four = 40;

	head = ft_lstnew((void *)one);
    *lst = head;
    head->next = ft_lstnew((void *)two);
	ft_lstadd_front(lst, ft_lstnew((void *)three));
	ft_lstadd_back(lst, ft_lstnew((void *)four));

    current = *lst;
    
    size = ft_lstsize(*lst);
    printf("size: %d\n", size);
    while (current != NULL)
    {
    	printf("%zu\n", *(size_t *)(current->content));
        current = current->next;
    }
    last = ft_lstlast(*lst);
    printf("last: %zu\n", *(size_t *)(last->content));
    
    
    *lst = ft_lstmap(*lst, ft_multiplier, del);
    current = *lst;
    while (current != NULL)
    {
    	printf("%zu\n", *(size_t *)current->content);
        current = current->next;
    }

	return (0);
}