#include "libft.h"
#include <stdio.h> //////////

int main()
{

	int result_flg = 1;

	// for (int i = -2147483648; i < -2147483627; i++)
	// for (int i = 2147483638; i < 2147483647; i++)
	for (int i = -10; i < 100; i++)
	{
		printf("%d : %s , issame:%d\n", i, ft_itoa(i), (i == atoi(ft_itoa(i))) ? 1 : 0);
		if (result_flg && (i != atoi(ft_itoa(i))))
			result_flg = 0;
	}

	if (result_flg)
		printf("SUCCESS!\n");
	else
		printf("fail...............\n");
	return 0;
}