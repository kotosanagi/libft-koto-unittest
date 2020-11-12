#include "libft.h"
#include <stdio.h>

int main(){
	char str00[] = "";
	unsigned int start00 = 5;
	size_t len00 = 3;
	char *arr00 = ft_substr(str00, start00, len00);
	printf("============\nstr00:'%s', start00:%d, len00:%zu\n", str00, start00, len00);
	printf("arr00:'%s'\n",arr00);
	for (int i = -3; i < (int)ft_strlen(str00); i++)
	{
		printf("arr[%d] : %c\n",i, arr00[i]);
	}

	char str01[] = "namatamago";
	unsigned int start01 = 5;
	size_t len01 = 10;
	char *arr01 = ft_substr(str01, start01, len01);
	printf("============\nstr01:'%s', start01:%d, len01:%zu\n", str01, start01, len01);
	printf("arr01:'%s'\n",arr01);
	for (int i = -3; i < (int)ft_strlen(str01); i++)
	{
		printf("arr[%d] : %c\n",i, arr01[i]);
	}

	char str02[] = "namatamago";
	unsigned int start02 =   5;
	size_t len02   =   5;
	char *arr02 = ft_substr(str02, start02, len02);
	printf("============\nstr02:'%s', start02:%d, len02:%zu\n", str02, start02, len02);
	printf("arr02:'%s'\n",arr02);
	for (int i = -3; i < (int)ft_strlen(str02); i++)
	{
		printf("arr[%d] : %c\n",i, arr02[i]);
	}

	char str03[] =   "namatamago";
	unsigned int start03 =   5;
	size_t len03 = 3;
	char *arr03 = ft_substr(str03, start03, len03);
	printf("============\nstr03:'%s', start03:%d, len03:%zu\n", str03, start03, len03);
	printf("arr03:'%s'\n",arr03);
	for (int i = -3; i < (int)ft_strlen(str03); i++)
	{
		printf("arr[%d] : %c\n",i, arr03[i]);
	}
	char str04[] =   "namatamago";
	unsigned int    start04 =   0;
	size_t len04   =   3;
	char *arr04 = ft_substr(str04, start04, len04);
	printf("============\nstr04:'%s', start04:%d, len04:%zu\n", str04, start04, len04);
	printf("arr04:'%s'\n",arr04);
	for (int i = -3; i < (int)ft_strlen(str04); i++)
	{
		printf("arr[%d] : %c\n",i, arr04[i]);
	}

	char str05[] =   "namatamago";
	unsigned int    start05 =   5;
	size_t len05   =   0;
	char *arr05 = ft_substr(str05, start05, len05);
	printf("============\nstr05:'%s', start05:%d, len05:%zu\n", str05, start05, len05);
	printf("arr05:'%s'\n",arr05);
	for (int i = -3; i < (int)ft_strlen(str05); i++)
	{
		printf("arr[%d] : %c\n",i, arr05[i]);
	}

	char str06[] =   "namatamago";
	unsigned int    start06 =   0;
	size_t          len06   =   0;
	char *arr06 = ft_substr(str06, start06, len06);
	printf("============\nstr06:'%s', start06:%d, len06:%zu\n", str06, start06, len06);
	printf("arr06:'%s'\n",arr06);
	for (int i = -3; i < (int)ft_strlen(str06); i++)
	{
		printf("arr[%d] : %c\n",i, arr06[i]);
	}

	char str07[] =   "namatamago";
	unsigned int    start07 =   5;
	size_t          len07   =   -1;
	char *arr07 = ft_substr(str07, start07, len07);
	printf("============\nstr07:'%s', start07:%d, len07:%zu\n", str07, start07, len07);
	printf("arr07:'%s'\n",arr07);
	for (int i = -3; i < (int)ft_strlen(str07); i++)
	{
		printf("arr[%d] : %c\n",i, arr07[i]);
	}

	char str08[] =   "namatamago";
	unsigned int    start08 =   -1;
	size_t          len08   =   5;
	char *arr08 = ft_substr(str08, start08, len08);
	printf("============\nstr08:'%s', start08:%d, len08:%zu\n", str08, start08, len08);
	printf("arr08:'%s'\n",arr08);
	for (int i = -3; i < (int)ft_strlen(str08); i++)
	{
		printf("arr[%d] : %c\n",i, arr08[i]);
	}

	char str09[] =   "namatamago";
	unsigned int    start09 =   -1;
	size_t          len09   =   -1;
	char *arr09 = ft_substr(str09, start09, len09);
	printf("============\nstr09:'%s', start09:%d, len09:%zu\n", str09, start09, len09);
	printf("arr09:'%s'\n",arr09);
	for (int i = -3; i < (int)ft_strlen(str09); i++)
	{
		printf("arr[%d] : %c\n",i, arr09[i]);
	}
}