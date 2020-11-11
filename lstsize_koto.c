#include "libft.h"
#include <stdio.h>
int main(){

	t_list lst03 = {NULL, NULL};
	t_list lst02 = {NULL, &lst03};
	t_list lst01 = {NULL, &lst02};

	printf("%d\n",ft_lstsize(&lst01));
}