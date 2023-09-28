#include <stdlib.h>
#include <stdio.h>

struct	node {
	int				data;
	struct node		*next;
};


struct node	*one_two_three(void)
{
	struct node	*head = NULL;
	struct node *second = NULL;
	struct node *third = NULL;

	head = malloc (sizeof(struct node));
	if (!head)
		return (0);
	second = malloc (sizeof(struct node));
	if (!second)
		return (0);
	third = malloc (sizeof(struct node));
	if (!third)
		return (0);
	head->data = 1;
	head->next = second;
	second->data = 2;
	second->next = third;
	third->data = 3;
	third->next = NULL;
	return (head);
}
/*
int ft_len(struct node *lst)
{
    int len;

    len = 0;
    if (!lst)
        return (len);
    while (lst->next)
    {
        len ++;
        lst = lst->next;
    }
    len ++;
    return (len);
}
*/

int ft_len(struct node *lst)
{
    struct node *current;
    int         len;

    len = 0;
    current = lst;
    while (current != NULL)
    {
        len ++;
        current = current->next;
    }
    return (len);
}

int	main(void)
{
	struct node	*ptr;
	struct node *temp;

	temp = NULL;
	ptr = one_two_three();
	printf("len: %d\n", ft_len(ptr));
    printf("len: %d\n", ft_len(0));
	return (0);
}