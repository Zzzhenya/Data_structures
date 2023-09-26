/*
Counts the number of nodes in a list.
lst: The beginning of the list.
Return value The length of the list
*/
int	ft_lstsize(t_list *lst)
{
	int size;

	size = 0;
	while (lst != 0)
	{
		size ++;
		lst = lst->next;
	}
	return (size);
}