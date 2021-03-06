#include "libft.h"
#include <stdio.h>
#include <strings.h>

int main()
{
	char str1[] = "kotoyori";
	char str2[] = "kotoyori";
	int i;
	int len = strlen(str1);
	int result_flg = 1;

	printf("str:%s\n",str1);
	for (i = 0; i < len; i++)
	{
		printf("str[%d]:%c, %c\n",i, str1[i], str2[i]);
	}

	size_t trim = 3;
	bzero(str2, trim);
	printf("=========og_bzero is done============\n");

	ft_bzero(str1, trim);
	printf("=========ft_bzero is done============\n");
	for (i = 0; i < len; i++)
	{
		printf("str[%d]:%c, %c, issame:%d\n",i, str1[i], str2[i], (str1[i] == str2[i]) ? 1 : 0);
		// write(1, &tmp_i, 1);
		// write(1, ":", 1);
		// write(1, &str1[i], 1);
		// write(1, " ", 1);
		// write(1, &str2[i], 1);
		// write(1, "\n", 1);
		if (result_flg && (str1[i] != str2[i]))
			result_flg = 0;
	}
	if (result_flg)
		printf("SUCCESS!\n");
	else
		printf("fail...............\n");

	return 0;
}
