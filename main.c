#include "liblist.h"
#include <stdio.h>

int	main(void)
{
    t_list  *l;

    l = ft_lstnew((void*)42);
    printf("%ld\n",(long)(l->content));
    printf("%ld\n",(long)(l->next));
    printf("%d\n",(ft_lstsize(l)));
	return (0);
}