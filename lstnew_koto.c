#include "libft.h"
#include <stdio.h>
int main(){
	t_list *lst00;
	char str[] = "inosuke";

	printf("content is %s\n",str);

	lst00 = ft_lstnew(str);

	printf("===ft_lstnew is done====\n");
	printf("lst00->content : %s\n", lst00->content);
}