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
 

int	main(void)
{
	struct node	*ptr;
	struct node *temp;

	temp = NULL;
	ptr = one_two_three();
	while (ptr->next != 0)
	{
		printf("data: %d\n", ptr->data);
		temp = ptr->next;
		free (ptr);
		ptr = temp;
	}
	printf("data: %d\n", ptr->data);
	free (ptr);
	return (0);
}
