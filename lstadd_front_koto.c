#include "libft.h"
#include <stdio.h>
int main(){
	t_list *lst02;
	t_list *lst01;

	lst02 = ft_lstnew("lst02");
	lst01 = ft_lstnew("lst01");
	// lst01 = NULL;

	printf("lst01's content: %s\n",lst01->content);
	printf("lst02's content: %s\n\n",lst02->content);

	ft_lstadd_front(&lst02, lst01);
	printf("%s's next is %s\n", lst01->content, lst01->next->content);
}