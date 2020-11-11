#include "libft.h"
#include <stdio.h>

int main(){
	for(int i = 0;i < 3;i++)
	{
		ft_putstr_fd("hello", i);
		printf(" : %d\n",i);
	}
}