#include "libft.h"
#include <stdio.h>
int main(){
	char s00[] = "kamado nezuko";
	char c00 = 'a';
	char **arr00;
	printf("========\ns:%s, c:%c\n",s00,c00);
	arr00 = ft_split(s00, c00);
	for (int i = 0;i <= count_words(s00, c00);i++){
		printf("arr[%d]:%s\n", i, arr00[i]);
	}

	char s01[] = "kamado nezuko";
	char c01 = 'o';
	char **arr01;
	printf("========\ns:%s, c:%c\n",s01,c01);
	arr01 = ft_split(s01, c01);
	for (int i = 0;i <= count_words(s01, c01);i++){
		printf("arr[%d]:%s\n", i, arr01[i]);
	}

	char s02[] = "kamado nezuko";
	char c02 = 'k';
	char **arr02;
	printf("========\ns:%s, c:%c\n",s02,c02);
	arr02 = ft_split(s02, c02);
	for (int i = 0;i <= count_words(s02, c02);i++){
		printf("arr[%d]:%s\n", i, arr02[i]);
	}

	char s03[] = "kkkkkkamakkkkkkkkdo nezkkkkkkuko";
	char c03 = 'k';
	char **arr03;
	printf("========\ns:%s, c:%c\n",s03,c03);
	arr03 = ft_split(s03, c03);
	for (int i = 0;i <= count_words(s03, c03);i++){
		printf("arr[%d]:%s\n", i, arr03[i]);
	}

	char s04[] = "kamado nezukooooooo";
	char c04 = 'o';
	char **arr04;
	printf("========\ns:%s, c:%c\n",s04,c04);
	arr04 = ft_split(s04, c04);
	for (int i = 0;i <= count_words(s04, c04);i++){
		printf("arr[%d]:%s\n", i, arr04[i]);
	}

	char s05[] = "kamado nezuko";
	char c05 = '\0';
	char **arr05;
	printf("========\ns:%s, c:%c\n",s05,c05);
	arr05 = ft_split(s05, c05);
	for (int i = 0;i <= count_words(s05, c05);i++){
		printf("arr[%d]:%s\n", i, arr05[i]);
	}

	char s06[] = "";
	char c06 = 'o';
	char **arr06;
	printf("========\ns:%s, c:%c\n",s06,c06);
	arr06 = ft_split(s06, c06);
	for (int i = 0;i <= count_words(s06, c06);i++){
		printf("arr[%d]:%s\n", i, arr06[i]);
	}


	return 0;
}