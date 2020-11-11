#include "libft.h"
#include <stdio.h>
int main(){
	t_list *lst00;

	lst00 = ft_lstnew(ft_strdup("content00"));
	printf("lst00's content is %s\n", lst00->content);
	ft_lstdelone(lst00, &free);
	printf("lst00's content is %s\n", lst00->content);
}