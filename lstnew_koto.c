#include "libft.h"
#include <stdio.h>
int main(){
	t_list *lst00;

	lst00 = ft_lstnew("inosuke");
	printf("%s\n", lst00->content);
}