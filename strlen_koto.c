#include "libft.h"
#include <stdio.h>
#include <string.h>
int main(void)
{
	int result_flg = 1;
	char s1[] = "koto";
	char s2[] = "kotokoto";
	char s3[] = "";
	char s4[] = " ";
	char s5[] = "        ";

	printf("%10s, ft_strlen:%10lu , original_strlen:%10lu , issame:%d\n", s1, ft_strlen(s1), strlen(s1), (ft_strlen(s1) == strlen(s1) ? 1 : 0));
	printf("%10s, ft_strlen:%10lu , original_strlen:%10lu , issame:%d\n", s2, ft_strlen(s2), strlen(s2), (ft_strlen(s2) == strlen(s2) ? 1 : 0));
	printf("%10s, ft_strlen:%10lu , original_strlen:%10lu , issame:%d\n", s3, ft_strlen(s3), strlen(s3), (ft_strlen(s3) == strlen(s3) ? 1 : 0));
	printf("%10s, ft_strlen:%10lu , original_strlen:%10lu , issame:%d\n", s4, ft_strlen(s4), strlen(s4), (ft_strlen(s4) == strlen(s4) ? 1 : 0));
	printf("%10s, ft_strlen:%10lu , original_strlen:%10lu , issame:%d\n", s5, ft_strlen(s5), strlen(s5), (ft_strlen(s5) == strlen(s5) ? 1 : 0));
	if (result_flg && (ft_strlen(s1) != strlen(s1) ||
					ft_strlen(s2) != strlen(s2) ||
					ft_strlen(s3) != strlen(s3) ||
					ft_strlen(s4) != strlen(s4) ||
					ft_strlen(s5) != strlen(s5) ))
	{
		result_flg = 0;
	}

	if (result_flg)
		printf("SUCCESS!\n");
	else
		printf("fail...............\n");
	return 0;
}