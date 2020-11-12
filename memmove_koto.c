#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
	size_t n = 4;
	char dst1[] = "hamigaki";
	char dst2[] = "hamigaki";
	char src[] = "kotoyori";
	
	int i;
	int len = strlen(dst1);
	int result_flg = 1;

	for (i = 0; i < len; i++)
	{
		printf("%d:%c %c %c\n",i, src[i], dst1[i], dst2[i]);
	}

printf("===before exec====\n");
	memmove(dst2, src, n);
printf("===og is done====\n");
	ft_memmove(dst1, src, n);
printf("===ft is done====\n");

	for (i = 0; i < len; i++)
	{
		printf("%d:%c %c %c\n",i, src[i], dst1[i], dst2[i]);
		if (result_flg && (dst1[i] != dst2[i]))
			result_flg = 0;
	}

	if (result_flg)
		printf("SUCCESS!\n");
	else
		printf("fail...............\n");

	return 0;
}