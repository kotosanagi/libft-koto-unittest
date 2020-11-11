#include "libft.h"
#include <stdio.h>
#include <ctype.h>
int        main(void)
{
	int result_flg = 1;
	for (int i = -10; i < 135; i++)
	{
		printf("%3d:%c , ft_tolower:%c , origin_tolower:%c ,issame:%d\n", i, i, ft_tolower(i), tolower(i), (ft_tolower(i) == tolower(i) ? 1 : 0));
		if (result_flg && ft_tolower(i) != tolower(i))
			result_flg = 0;
	}
	if (result_flg)
		printf("SUCCESS!\n");
	else
		printf("fail...............\n");
	return 0;
}
