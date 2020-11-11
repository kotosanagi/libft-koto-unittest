#include "libft.h"
#include <stdio.h>
int main(){

	t_list lst03 = {"lst03", NULL};
	t_list lst02 = {"lst02", &lst03};
	t_list lst01 = {"lst01", &lst02};

	t_list *res = ft_lstlast(&lst01);
	printf("%s's last content is %s\n",lst01.content,res->content);
}