#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
	char dst1[] = "hamigaki";
	char dst2[] = "hamigaki";
	char src[] = "kotoyori";
	int i;
	int tmp_i;
	int len = strlen(dst1);
	int result_flg = 1;

	for (i = 0; i < len; i++)
	{
		tmp_i = i + '0';
		write(1, &tmp_i, 1);
		write(1, ":", 1);
		write(1, &src[i], 1);
		write(1, " ", 1);
		write(1, &dst1[i], 1);
		write(1, " ", 1);
		write(1, &dst2[i], 1);
		write(1, "\n", 1);
	}

	size_t n = 4;
	write(1, "====before exec====\n", 20);
	memcpy(dst2, src, n);
	write(1, "====og is done ====\n", 20);
	ft_memcpy(dst1, src, n);
	write(1, "====ft is done ====\n", 20);


	for (i = 0; i < len; i++)
	{
		tmp_i = i + '0';
		write(1, &tmp_i, 1);
		write(1, ":", 1);
		write(1, &src[i], 1);
		write(1, " ", 1);
		write(1, &dst1[i], 1);
		write(1, " ", 1);
		write(1, &dst2[i], 1);
		write(1, "\n", 1);
		if (result_flg && (dst1[i] != dst2[i]))
			result_flg = 0;
	}
	if (result_flg)
		printf("SUCCESS!\n");
	else
		printf("fail...............\n");

	return 0;
}