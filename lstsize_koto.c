#include "libft.h"
#include <stdio.h>
int main(){

	int size;
	t_list lst04 = {"lst04", NULL};
	t_list lst03 = {"lst03", &lst04};
	t_list lst02 = {"lst02", &lst03};
	t_list lst01 = {"lst01", &lst02};

	t_list *lst;
	lst = &lst01;
	while (lst)
	{
		printf("content : %s\n", lst->content);
		lst = lst->next;
	}

	size = ft_lstsize(&lst01);

	printf("===ft_lstsize is done====\n");
	printf("lstsize is %d\n", size);
}