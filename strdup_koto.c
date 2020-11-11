#include "libft.h"
#include <stdio.h>
#include <string.h>
int main(void)
{
	int result_flg = 1;
	char s1[] = "koto";
	char s2[] = "kotokoto";
	char s3[] = "";
	char s4[] = "a";
	char s5[] = "        ";

	printf("%10s, ft_strdup:%10s , og_strdup:%10s , issame:%d\n", s1, ft_strdup(s1), strdup(s1), (strcmp(ft_strdup(s1), strdup(s1))==0 ? 1 : 0));
	printf("%10s, ft_strdup:%10s , og_strdup:%10s , issame:%d\n", s2, ft_strdup(s2), strdup(s2), (strcmp(ft_strdup(s2), strdup(s2))==0 ? 1 : 0));
	printf("%10s, ft_strdup:%10s , og_strdup:%10s , issame:%d\n", s3, ft_strdup(s3), strdup(s3), (strcmp(ft_strdup(s3), strdup(s3))==0 ? 1 : 0));
	printf("%10s, ft_strdup:%10s , og_strdup:%10s , issame:%d\n", s4, ft_strdup(s4), strdup(s4), (strcmp(ft_strdup(s4), strdup(s4))==0 ? 1 : 0));
	printf("%10s, ft_strdup:%10s , og_strdup:%10s , issame:%d\n", s5, ft_strdup(s5), strdup(s5), (strcmp(ft_strdup(s5), strdup(s5))==0 ? 1 : 0));
	if (result_flg && (strcmp(ft_strdup(s1), strdup(s1)) != 0 ||
					strcmp(ft_strdup(s2), strdup(s2)) != 0 ||
					strcmp(ft_strdup(s3), strdup(s3)) != 0 ||
					strcmp(ft_strdup(s4), strdup(s4)) != 0 ||
					strcmp(ft_strdup(s5), strdup(s5)) != 0 ))
	{
		result_flg = 0;
	}

	if (result_flg)
		printf("SUCCESS!\n");
	else
		printf("fail...............\n");
	return 0;
}
