#include "libft.h"
#include <stdio.h>
int main(){
	t_list **lst;
	t_list *lst03;
	t_list *lst02;
	t_list *lst01;

	lst01 = ft_lstnew(ft_strdup("lst01"));
	lst02 = ft_lstnew(ft_strdup("lst02"));
	lst03 = ft_lstnew(ft_strdup("lst03"));

	lst = &lst01;
	ft_lstadd_back(lst, lst02);
	ft_lstadd_back(lst, lst03);
	printf("%s\n",(*lst)->content);
	printf("%s\n",(*lst)->next->content);
	printf("%s\n",(*lst)->next->next->content);
	printf("------\n");
	ft_lstclear(lst, &free);
	printf("------\n");
	printf("%s\n",(*lst)->content);
	printf("%s\n",(*lst)->next->content);
	printf("%s\n",(*lst)->next->next->content);

	return 0;
}