#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	int num = 4; ////////////////////////////////////////
	size_t len = 3; ////////////////////////////////////////
	unsigned char c = '-';

	int result_flg = 1;
	char s11[] = "1234567890";
	char s12[] = "1234567890";
	char s21[] = "kotoyori";
	char s22[] = "kotoyori";

	printf("og : %10s -> ", s12);
	memset(s12 + num, c, len);
	printf("%10s , ", s12);
	printf("ft : %10s -> ", s11);
	ft_memset(s11 + num, c, len);
	printf("%10s , ", s11);
	printf("issame : %d\n", (strcmp(s11, s12) == 0 ? 1 : 0));

	printf("ft : %10s -> ", s21);
	ft_memset(s21 + num, c, len);
	printf("%10s , ", s21);
	printf("og : %10s -> ", s22);
	memset(s22 + num, c, len);
	printf("%10s , ", s22);
	printf("issame : %d\n", (strcmp(s21, s22) == 0 ? 1 : 0));

	if (result_flg && (strcmp(s11, s12) != 0 || strcmp(s21, s22) != 0))
	{
		result_flg = 0;
	}

	if (result_flg)
		printf("SUCCESS!\n");
	else
		printf("fail...............\n");

	return 0;
}
