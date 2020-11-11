#include "libft.h"
#include <stdio.h>
#include <string.h>
int main(void)
{
	int result_flg = 1;
	char s11[]="koto";
	char s12[]="kot";
	char s21[]="";
	char s22[]="kotob";
	char s31[]="koto";
	char s32[]="koto";
	char s41[]="koto";
	char s42[]="";
	char s51[]="koto";
	char s52[]="kotoa";

	for(int i = 0;i<20;i++)
	{
		printf("%6s vs %6s , n:%2d , ft_strncmp:%4d , original_strncmp:%4d , issame:%d\n",s11,s12,i,ft_strncmp(s11,s12,i),strncmp(s11,s12,i),(ft_strncmp(s11,s12,i)==strncmp(s11,s12,i) ? 1 : 0));
		printf("%6s vs %6s , n:%2d , ft_strncmp:%4d , original_strncmp:%4d , issame:%d\n",s21,s22,i,ft_strncmp(s21,s22,i),strncmp(s21,s22,i),(ft_strncmp(s21,s22,i)==strncmp(s21,s22,i) ? 1 : 0));
		printf("%6s vs %6s , n:%2d , ft_strncmp:%4d , original_strncmp:%4d , issame:%d\n",s31,s32,i,ft_strncmp(s31,s32,i),strncmp(s31,s32,i),(ft_strncmp(s31,s32,i)==strncmp(s31,s32,i) ? 1 : 0));
		printf("%6s vs %6s , n:%2d , ft_strncmp:%4d , original_strncmp:%4d , issame:%d\n",s41,s42,i,ft_strncmp(s41,s42,i),strncmp(s41,s42,i),(ft_strncmp(s41,s42,i)==strncmp(s41,s42,i) ? 1 : 0));
		printf("%6s vs %6s , n:%2d , ft_strncmp:%4d , original_strncmp:%4d , issame:%d\n",s51,s52,i,ft_strncmp(s51,s52,i),strncmp(s51,s52,i),(ft_strncmp(s51,s52,i)==strncmp(s51,s52,i) ? 1 : 0));
		if(result_flg && (
			ft_strncmp(s11,s12,i)!=strncmp(s11,s12,i) ||
			ft_strncmp(s21,s22,i)!=strncmp(s21,s22,i) ||
			ft_strncmp(s31,s32,i)!=strncmp(s31,s32,i) ||
			ft_strncmp(s41,s42,i)!=strncmp(s41,s42,i) ||
			ft_strncmp(s51,s52,i)!=strncmp(s51,s52,i)))
			{
				result_flg = 0;
			}
	}
	if(result_flg)
		printf("SUCCESS!\n");
	else
		printf("fail...............\n");
	return 0;
}