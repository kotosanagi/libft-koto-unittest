#include "libft.h"
#include <stdio.h>
#include <string.h>
int main()
{
	char dst1[] = "kotoyori";
	char dst2[] = "kotoyori";
	char src[] = "pokemon.";
	char c = 'e';
	int n = 7;

	printf("n      : %d\n", n);
	printf("c      : %c\n", c);
	printf("src    : %s\n", src);
	printf("dst_ft : %s\n", dst1);
	printf("dst_og : %s\n", dst2);
	printf("ft_memcpy     : %s\n", ft_memccpy(dst1, src, c, n));
	printf("origin_memcpy : %s\n", memccpy(dst2, src, c, n));
	printf("dst_ft : %s\n", dst1);
	printf("dst_og : %s\n", dst2);

	int result_flg = 1;
	for (int i = 0; i < (int)strlen(dst1); i++)
	{
		if (result_flg && (dst1[i] != dst2[i]))
			result_flg = 0;
	}
	if (result_flg)
		printf("SUCCESS!\n");
	else
		printf("fail...............\n");
	return 0;
}
