#include "libft.h"
void *f(void *content)
{
	char *arr;
	if (content)
	{
		arr = malloc(sizeof(char) * (4 + 1));
		if (arr == NULL)
			return (NULL);
		for (int i = 0;i < 4; i++){
			arr[i] = i + 'a';
		}
		arr[4] = '\0';
		content = (void *)arr;
	}
	return (content);
}

#include <stdio.h>
int main(){
	t_list *lst03;
	t_list *lst02;
	t_list *lst01;

	lst01 = ft_lstnew("lst01");
	lst02 = ft_lstnew("lst02");
	lst03 = ft_lstnew("lst03");
	ft_lstadd_back(&lst01, lst02);
	ft_lstadd_back(&lst02, lst03);
	printf("original list\n");
	printf("%s\n",lst01->content);
	printf("%s\n",lst01->next->content);
	printf("%s\n",lst01->next->next->content);

	printf("-------\n");
	printf("nothing changed\n");
	t_list *lst = ft_lstmap(lst01, &f, &free);

	printf("%s\n",lst01->content);
	printf("%s\n",lst01->next->content);
	printf("%s\n",lst01->next->next->content);

	printf("-------\n");
	printf("new list\n");
	printf("lst: %s\n",lst->content);
	printf("lst: %s\n",lst->next->content);
	printf("lst: %s\n",lst->next->next->content);

	return 0;
}
