#include "libft.h"
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[] = "kotoyori";
	int result_flg = 1;
	for (int i = -10; i < 140; i++)
	{
		printf("c:%c , ft_strrchr:%15p , origin_strrchr:%15p ,issame:%d\n", i, ft_strrchr(str, i), strrchr(str, i), (ft_strrchr(str, i) == strrchr(str, i) ? 1 : 0));
		if (result_flg && ft_strrchr(str, i) != strrchr(str, i))
			result_flg = 0;
	}
	if (result_flg)
		printf("SUCCESS!\n");
	else
		printf("fail...............\n");
	return 0;
}