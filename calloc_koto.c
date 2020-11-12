#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	size_t arg_count = 5;
	int *p_ft;

	p_ft = (int *)ft_calloc(arg_count, sizeof(int));
	for (size_t i = 0; i < arg_count; i++){
		write(1, &p_ft[i], 1);
	}
	free(p_ft);

	return 0;
}

// gcc -Wall -Wextra -Werror *.c && ./a.out | cat -e