#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
	int result_flg = 1;
	int result_tmp;

	printf("before exec , dst:'tanaka', src:''\n");

	char dst11[10] = "isi";
	char dst12[10] = "isi";
	char src1[] = "shita";
	int i = 0;
	result_tmp = (ft_strlcpy(dst11, src1, i) == strlcpy(dst12, src1, i) && (strcmp(dst11, dst12) == 0)) ? 1 : 0;
	printf("n:%2d, len_dst:%2lu, ft_ret:%2lu, ori_ret:%2lu, dst11:%10s, dst12:%10s, src1:%10s, issame:%d\n",
		i, strlen(dst11), ft_strlcpy(dst11, src1, i), strlcpy(dst12, src1, i), dst11, dst12, src1, result_tmp);
	if (result_flg && !(result_tmp))
		result_flg = 0;

	char dst21[10] = "isi";
	char dst22[10] = "isi";
	char src2[] = "shita";
	i = 1;
	result_tmp = (ft_strlcpy(dst21, src2, i) == strlcpy(dst22, src2, i) && (strcmp(dst21, dst22) == 0)) ? 1 : 0;
	printf("n:%2d, len_dst:%2lu, ft_ret:%2lu, ori_ret:%2lu, dst21:%10s, dst22:%10s, src2:%10s, issame:%d\n",
		i, strlen(dst21), ft_strlcpy(dst21, src2, i), strlcpy(dst22, src2, i), dst21, dst22, src2, result_tmp);
	if (result_flg && !(result_tmp))
		result_flg = 0;

	char dst31[10] = "isi";
	char dst32[10] = "isi";
	char src3[] = "shita";
	i = 2;
	result_tmp = (ft_strlcpy(dst31, src3, i) == strlcpy(dst32, src3, i) && (strcmp(dst31, dst32) == 0)) ? 1 : 0;
	printf("n:%2d, len_dst:%2lu, ft_ret:%2lu, ori_ret:%2lu, dst31:%10s, dst32:%10s, src3:%10s, issame:%d\n",
		i, strlen(dst31), ft_strlcpy(dst31, src3, i), strlcpy(dst32, src3, i), dst31, dst32, src3, result_tmp);
	if (result_flg && !(result_tmp))
		result_flg = 0;

	char dst41[10] = "isi";
	char dst42[10] = "isi";
	char src4[] = "shita";
	i = 3;
	result_tmp = (ft_strlcpy(dst41, src4, i) == strlcpy(dst42, src4, i) && (strcmp(dst41, dst42) == 0)) ? 1 : 0;
	printf("n:%2d, len_dst:%2lu, ft_ret:%2lu, ori_ret:%2lu, dst41:%10s, dst42:%10s, src4:%10s, issame:%d\n",
		i, strlen(dst41), ft_strlcpy(dst41, src4, i), strlcpy(dst42, src4, i), dst41, dst42, src4, result_tmp);
	if (result_flg && !(result_tmp))
		result_flg = 0;

	char dst51[10] = "isi";
	char dst52[10] = "isi";
	char src5[] = "shita";
	i = 4;
	result_tmp = (ft_strlcpy(dst51, src5, i) == strlcpy(dst52, src5, i) && (strcmp(dst51, dst52) == 0)) ? 1 : 0;
	printf("n:%2d, len_dst:%2lu, ft_ret:%2lu, ori_ret:%2lu, dst51:%10s, dst52:%10s, src5:%10s, issame:%d\n",
		i, strlen(dst51), ft_strlcpy(dst51, src5, i), strlcpy(dst52, src5, i), dst51, dst52, src5, result_tmp);
	if (result_flg && !(result_tmp))
		result_flg = 0;

	char dst61[10] = "isi";
	char dst62[10] = "isi";
	char src6[] = "shita";
	i = 5;
	result_tmp = (ft_strlcpy(dst61, src6, i) == strlcpy(dst62, src6, i) && (strcmp(dst61, dst62) == 0)) ? 1 : 0;
	printf("n:%2d, len_dst:%2lu, ft_ret:%2lu, ori_ret:%2lu, dst61:%10s, dst62:%10s, src6:%10s, issame:%d\n",
		i, strlen(dst61), ft_strlcpy(dst61, src6, i), strlcpy(dst62, src6, i), dst61, dst62, src6, result_tmp);
	if (result_flg && !(result_tmp))
		result_flg = 0;

	char dst71[10] = "isi";
	char dst72[10] = "isi";
	char src7[] = "shita";
	i = 6;
	result_tmp = (ft_strlcpy(dst71, src7, i) == strlcpy(dst72, src7, i) && (strcmp(dst71, dst72) == 0)) ? 1 : 0;
	printf("n:%2d, len_dst:%2lu, ft_ret:%2lu, ori_ret:%2lu, dst71:%10s, dst72:%10s, src7:%10s, issame:%d\n",
		i, strlen(dst71), ft_strlcpy(dst71, src7, i), strlcpy(dst72, src7, i), dst71, dst72, src7, result_tmp);
	if (result_flg && !(result_tmp))
		result_flg = 0;

	char dst81[10] = "isi";
	char dst82[10] = "isi";
	char src8[] = "shita";
	i = 7;
	result_tmp = (ft_strlcpy(dst81, src8, i) == strlcpy(dst82, src8, i) && (strcmp(dst81, dst82) == 0)) ? 1 : 0;
	printf("n:%2d, len_dst:%2lu, ft_ret:%2lu, ori_ret:%2lu, dst81:%10s, dst82:%10s, src8:%10s, issame:%d\n",
		i, strlen(dst81), ft_strlcpy(dst81, src8, i), strlcpy(dst82, src8, i), dst81, dst82, src8, result_tmp);
	if (result_flg && !(result_tmp))
		result_flg = 0;

	char dst91[10] = "isi";
	char dst92[10] = "isi";
	char src9[] = "shita";
	i = 8;
	result_tmp = (ft_strlcpy(dst91, src9, i) == strlcpy(dst92, src9, i) && (strcmp(dst91, dst92) == 0)) ? 1 : 0;
	printf("n:%2d, len_dst:%2lu, ft_ret:%2lu, ori_ret:%2lu, dst91:%10s, dst92:%10s, src9:%10s, issame:%d\n",
		i, strlen(dst91), ft_strlcpy(dst91, src9, i), strlcpy(dst92, src9, i), dst91, dst92, src9, result_tmp);
	if (result_flg && !(result_tmp))
		result_flg = 0;

	if (result_flg)
		printf("SUCCESS!\n");
	else
		printf("fail...............\n");


	return 0;
}