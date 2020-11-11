#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
	int result_flg = 1;
	int result_tmp;

	printf("before exec , dst:'xy', src:'von'\n");

	char dst11[10] = "xy";
	char dst12[10] = "xy";
	char src1[] = "von";
	unsigned long ft_res_tmp;
	unsigned long og_res_tmp;
	int i = 0;
	ft_res_tmp = ft_strlcat(dst11, src1, i);
	og_res_tmp = strlcat(dst12, src1, i);
	result_tmp = (ft_res_tmp == og_res_tmp && (strcmp(dst11, dst12) == 0)) ? 1 : 0;
	printf("dstsize:%2d, len_dst:%2lu, ft_ret:%2lu, ori_ret:%2lu, dst11:%10s, dst12:%10s, src1:%10s, issame:%d\n",
		i, strlen(dst11), ft_res_tmp, og_res_tmp, dst11, dst12, src1, result_tmp);
	if (result_flg && !(result_tmp))
		result_flg = 0;

	char dst21[10] = "xy";
	char dst22[10] = "xy";
	char src2[] = "von";
	i = 1;
	ft_res_tmp = ft_strlcat(dst21, src2, i);
	og_res_tmp = strlcat(dst22, src2, i);
	result_tmp = (ft_res_tmp == og_res_tmp && (strcmp(dst21, dst22) == 0)) ? 1 : 0;
	printf("dstsize:%2d, len_dst:%2lu, ft_ret:%2lu, ori_ret:%2lu, dst21:%10s, dst22:%10s, src2:%10s, issame:%d\n",
		i, strlen(dst21), ft_res_tmp, og_res_tmp, dst21, dst22, src2, result_tmp);
	if (result_flg && !(result_tmp))
		result_flg = 0;

	char dst31[10] = "xy";
	char dst32[10] = "xy";
	char src3[] = "von";
	i = 2;
	ft_res_tmp = ft_strlcat(dst31, src3, i);
	og_res_tmp = strlcat(dst32, src3, i);
	result_tmp = (ft_res_tmp == og_res_tmp && (strcmp(dst31, dst32) == 0)) ? 1 : 0;
	printf("dstsize:%2d, len_dst:%2lu, ft_ret:%2lu, ori_ret:%2lu, dst31:%10s, dst32:%10s, src3:%10s, issame:%d\n",
		i, strlen(dst31), ft_res_tmp, og_res_tmp, dst31, dst32, src3, result_tmp);
	if (result_flg && !(result_tmp))
		result_flg = 0;

	char dst41[10] = "xy";
	char dst42[10] = "xy";
	char src4[] = "von";
	i = 3;
	ft_res_tmp = ft_strlcat(dst41, src4, i);
	og_res_tmp = strlcat(dst42, src4, i);
	result_tmp = (ft_res_tmp == og_res_tmp && (strcmp(dst41, dst42) == 0)) ? 1 : 0;
	printf("dstsize:%2d, len_dst:%2lu, ft_ret:%2lu, ori_ret:%2lu, dst41:%10s, dst42:%10s, src4:%10s, issame:%d\n",
		i, strlen(dst41), ft_res_tmp, og_res_tmp, dst41, dst42, src4, result_tmp);
	if (result_flg && !(result_tmp))
		result_flg = 0;

	char dst51[10] = "xy";
	char dst52[10] = "xy";
	char src5[] = "von";
	i = 4;
	ft_res_tmp = ft_strlcat(dst51, src5, i);
	og_res_tmp = strlcat(dst52, src5, i);
	result_tmp = (ft_res_tmp == og_res_tmp && (strcmp(dst51, dst52) == 0)) ? 1 : 0;
	printf("dstsize:%2d, len_dst:%2lu, ft_ret:%2lu, ori_ret:%2lu, dst51:%10s, dst52:%10s, src5:%10s, issame:%d\n",
		i, strlen(dst51), ft_res_tmp, og_res_tmp, dst51, dst52, src5, result_tmp);
	if (result_flg && !(result_tmp))
		result_flg = 0;

	char dst61[10] = "xy";
	char dst62[10] = "xy";
	char src6[] = "von";
	i = 5;
	ft_res_tmp = ft_strlcat(dst61, src6, i);
	og_res_tmp = strlcat(dst62, src6, i);
	result_tmp = (ft_res_tmp == og_res_tmp && (strcmp(dst61, dst62) == 0)) ? 1 : 0;
	printf("dstsize:%2d, len_dst:%2lu, ft_ret:%2lu, ori_ret:%2lu, dst61:%10s, dst62:%10s, src6:%10s, issame:%d\n",
		i, strlen(dst61), ft_res_tmp, og_res_tmp, dst61, dst62, src6, result_tmp);
	if (result_flg && !(result_tmp))
		result_flg = 0;

	char dst71[10] = "xy";
	char dst72[10] = "xy";
	char src7[] = "von";
	i = 6;
	ft_res_tmp = ft_strlcat(dst71, src7, i);
	og_res_tmp = strlcat(dst72, src7, i);
	result_tmp = (ft_res_tmp == og_res_tmp && (strcmp(dst71, dst72) == 0)) ? 1 : 0;
	printf("dstsize:%2d, len_dst:%2lu, ft_ret:%2lu, ori_ret:%2lu, dst71:%10s, dst72:%10s, src7:%10s, issame:%d\n",
		i, strlen(dst71), ft_res_tmp, og_res_tmp, dst71, dst72, src7, result_tmp);
	if (result_flg && !(result_tmp))
		result_flg = 0;

	char dst81[10] = "xy";
	char dst82[10] = "xy";
	char src8[] = "von";
	i = 7;
	ft_res_tmp = ft_strlcat(dst81, src8, i);
	og_res_tmp = strlcat(dst82, src8, i);
	result_tmp = (ft_res_tmp == og_res_tmp && (strcmp(dst81, dst82) == 0)) ? 1 : 0;
	printf("dstsize:%2d, len_dst:%2lu, ft_ret:%2lu, ori_ret:%2lu, dst81:%10s, dst82:%10s, src8:%10s, issame:%d\n",
		i, strlen(dst81), ft_res_tmp, og_res_tmp, dst81, dst82, src8, result_tmp);
	if (result_flg && !(result_tmp))
		result_flg = 0;

	char dst91[10] = "xy";
	char dst92[10] = "xy";
	char src9[] = "von";
	i = 8;
	ft_res_tmp = ft_strlcat(dst91, src9, i);
	og_res_tmp = strlcat(dst92, src9, i);
	result_tmp = (ft_res_tmp == og_res_tmp && (strcmp(dst91, dst92) == 0)) ? 1 : 0;
	printf("dstsize:%2d, len_dst:%2lu, ft_ret:%2lu, ori_ret:%2lu, dst91:%10s, dst92:%10s, src9:%10s, issame:%d\n",
		i, strlen(dst91), ft_res_tmp, og_res_tmp, dst91, dst92, src9, result_tmp);
	if (result_flg && !(result_tmp))
		result_flg = 0;

	if (result_flg)
		printf("SUCCESS!\n");
	else
		printf("fail...............\n");

	// char dst101[10] = "xy";
	// char dst102[10] = "xy";
	// char src10[] = "von";
	// i = 11;
	// // printf("ft  i:%d, %lu\n",i,ft_strlcat(dst101, src10, i));
	// printf("dstsize:%2d, len_dst:%2lu,  ft_ret:%2lu, dst101:%10s, src10:%10s\n",
	// i, strlen(dst101), ft_strlcat(dst101, src10, i), dst101, src10);
	// // printf("ori i:%d, %lu\n",i,strlcat(dst102, src10, i));
	// printf("dstsize:%2d, len_dst:%2lu, ori_ret:%2lu, dst101:%10s, src10:%10s\n",
	// i, strlen(dst102), strlcat(dst102, src10, i), dst102, src10);
	return 0;
}