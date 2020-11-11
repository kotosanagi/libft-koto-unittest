#include "libft.h"
#include <stdio.h>
#include <string.h>
int main(){
	char str01[] = "kamado";
	char str02[] = "tanjirou";
	printf("str01:'%s'=%lu, str02:'%s'=%lu, ret:'%s'=%lu\n",
	str01, strlen(str01), str02, strlen(str02), ft_strjoin(str01, str02), strlen(ft_strjoin(str01, str02)));

	char str11[] = "kamaboko";
	char str12[] = "konpeitou";
	printf("str11:'%s'=%lu, str12:'%s'=%lu, ret:'%s'=%lu\n",
	str11, strlen(str11), str12, strlen(str12), ft_strjoin(str11, str12), strlen(ft_strjoin(str11, str12)));

	char str21[] = "";
	char str22[] = "konpeitou";
	printf("str21:'%s'=%lu, str22:'%s'=%lu, ret:'%s'=%lu\n",
	str21, strlen(str21), str22, strlen(str22), ft_strjoin(str21, str22), strlen(ft_strjoin(str21, str22)));

	char str31[] = "kamaboko";
	char str32[] = "";
	printf("str31:'%s'=%lu, str32:'%s'=%lu, ret:'%s'=%lu\n",
	str31, strlen(str31), str32, strlen(str32), ft_strjoin(str31, str32), strlen(ft_strjoin(str31, str32)));

	char str41[] = "";
	char str42[] = "";
	printf("str41:'%s'=%lu, str42:'%s'=%lu, ret:'%s'=%lu\n",
	str41, strlen(str41), str42, strlen(str42), ft_strjoin(str41, str42), strlen(ft_strjoin(str41, str42)));
}