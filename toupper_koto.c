#include "libft.h"
#include <stdio.h>
#include <ctype.h>
int        main(void)
{
	int result_flg = 1;
	for (int i = -10; i < 135; i++)
	{
		printf("%3d:%c , ft_toupper:%c , origin_toupper:%c ,issame:%d\n", i, i, ft_toupper(i), toupper(i), (ft_toupper(i) == toupper(i) ? 1 : 0));
		if (result_flg && ft_toupper(i) != toupper(i))
			result_flg = 0;
	}
	if (result_flg)
		printf("SUCCESS!\n");
	else
		printf("fail...............\n");
	return 0;
}
