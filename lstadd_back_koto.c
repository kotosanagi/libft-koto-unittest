#include "libft.h"
#include <stdio.h>
int main(){
	t_list *lst02;
	t_list *lst01;

	lst01 = ft_lstnew("lst01");
	lst02 = ft_lstnew("lst02");
	ft_lstadd_back(&lst01, lst02);
	printf("%s's next element is %s\n", lst01->content, lst01->next->content);
}