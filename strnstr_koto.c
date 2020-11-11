#include "libft.h"
#include <stdio.h>
#include <string.h>
int main(void)
{
	int result_flg = 1;
	char s11[] = "koto";
	char s12[] = "ot";

	char s21[] = "";
	char s22[] = "kotob";

	char s31[] = "kotob";
	char s32[] = "";

	char s41[] = "koto";
	char s42[] = "kotoa";

	char s51[] = "kotoa";
	char s52[] = "koto";

	for (int i = 0; i < 20; i++)
	{
		printf("%6s vs %6s , n:%2d , ft_strnstr:%10s , original_strnstr:%10s , issame:%d\n", s11, s12, i, ft_strnstr(s11, s12, i), strnstr(s11, s12, i), (ft_strnstr(s11, s12, i) == strnstr(s11, s12, i) ? 1 : 0));
		printf("%6s vs %6s , n:%2d , ft_strnstr:%10s , original_strnstr:%10s , issame:%d\n", s21, s22, i, ft_strnstr(s21, s22, i), strnstr(s21, s22, i), (ft_strnstr(s21, s22, i) == strnstr(s21, s22, i) ? 1 : 0));
		printf("%6s vs %6s , n:%2d , ft_strnstr:%10s , original_strnstr:%10s , issame:%d\n", s31, s32, i, ft_strnstr(s31, s32, i), strnstr(s31, s32, i), (ft_strnstr(s31, s32, i) == strnstr(s31, s32, i) ? 1 : 0));
		printf("%6s vs %6s , n:%2d , ft_strnstr:%10s , original_strnstr:%10s , issame:%d\n", s41, s42, i, ft_strnstr(s41, s42, i), strnstr(s41, s42, i), (ft_strnstr(s41, s42, i) == strnstr(s41, s42, i) ? 1 : 0));
		printf("%6s vs %6s , n:%2d , ft_strnstr:%10s , original_strnstr:%10s , issame:%d\n", s51, s52, i, ft_strnstr(s51, s52, i), strnstr(s51, s52, i), (ft_strnstr(s51, s52, i) == strnstr(s51, s52, i) ? 1 : 0));
		if (result_flg && (ft_strnstr(s11, s12, i) != strnstr(s11, s12, i) ||
						ft_strnstr(s21, s22, i) != strnstr(s21, s22, i) ||
						ft_strnstr(s31, s32, i) != strnstr(s31, s32, i) ||
						ft_strnstr(s41, s42, i) != strnstr(s41, s42, i) ||
						ft_strnstr(s51, s52, i) != strnstr(s51, s52, i)))
		{
			result_flg = 0;
		}
	}
	if (result_flg)
		printf("SUCCESS!\n");
	else
		printf("fail...............\n");
	return 0;
}