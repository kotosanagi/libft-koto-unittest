#include "libft.h"
#include <stdio.h>
int main(){
	t_list *lst00;
	char str[] = "kotoyori";
	
	lst00 = ft_lstnew(ft_strdup(str));

	printf("lst00's content is %s\n", lst00->content);
	ft_lstdelone(lst00, &free);
	printf("====ft_lstdelone is done====\n");
	printf("lst00's content is %s\n", lst00->content);
}