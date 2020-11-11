#include "libft.h"
#include <stdio.h>
int main(){
	for(int i = 0;i < 3;i++)
	{
		ft_putchar_fd('a', i);
		printf(": %d\n", i);
	}
}