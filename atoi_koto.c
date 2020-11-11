#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int result_flg = 1;

	char str00[] = "534";                  //534
	char str01[] = "1234";                  //1234
	char str02[] = "+123";                  //123
	char str03[] = "-134";                  //-134
	char str04[] = "++531";                  //0
	char str05[] = "a32";                  //0
	char str06[] = "32a";                  //32
	char str07[] = " 53";                  //53
	char str08[] = "53 ";                  //53
	char str09[] = " 542 ";                  //542
	char str10[] = "  54";                  //54
	char str11[] = "   325   ";          //325
	char str12[] = "2147483647";  // 2147483647
	char str13[] = "2147483648";  // -2147483648
	char str14[] = "-2147483648"; //-2147483648
	char str15[] = "-2147483649"; // 2147483647
	char str16[] = "";                          //0
	char str17[] = "   ";                  //0
	char str18[] = "+";                          //0
	char str19[] = "-";                          //0
	char str20[] = "++";                  //0
	char str21[] = "32 9";                  //32
	char str22[] = "  31  8";          //31
	char str23[] = "9223372036854775804";
	char str24[] = "922337203685477580449837";
	char str25[] = "-9203945874093740198752947890278";

	printf("issame:%d, str00:'%s', ft:'%d', og:'%d'\n", (atoi(str00) == ft_atoi(str00) ? 1 : 0), str00, ft_atoi(str00), atoi(str00));
	printf("issame:%d, str01:'%s', ft:'%d', og:'%d'\n", (atoi(str01) == ft_atoi(str01) ? 1 : 0), str01, ft_atoi(str01), atoi(str01));
	printf("issame:%d, str02:'%s', ft:'%d', og:'%d'\n", (atoi(str02) == ft_atoi(str02) ? 1 : 0), str02, ft_atoi(str02), atoi(str02));
	printf("issame:%d, str03:'%s', ft:'%d', og:'%d'\n", (atoi(str03) == ft_atoi(str03) ? 1 : 0), str03, ft_atoi(str03), atoi(str03));
	printf("issame:%d, str04:'%s', ft:'%d', og:'%d'\n", (atoi(str04) == ft_atoi(str04) ? 1 : 0), str04, ft_atoi(str04), atoi(str04));
	printf("issame:%d, str05:'%s', ft:'%d', og:'%d'\n", (atoi(str05) == ft_atoi(str05) ? 1 : 0), str05, ft_atoi(str05), atoi(str05));
	printf("issame:%d, str06:'%s', ft:'%d', og:'%d'\n", (atoi(str06) == ft_atoi(str06) ? 1 : 0), str06, ft_atoi(str06), atoi(str06));
	printf("issame:%d, str07:'%s', ft:'%d', og:'%d'\n", (atoi(str07) == ft_atoi(str07) ? 1 : 0), str07, ft_atoi(str07), atoi(str07));
	printf("issame:%d, str08:'%s', ft:'%d', og:'%d'\n", (atoi(str08) == ft_atoi(str08) ? 1 : 0), str08, ft_atoi(str08), atoi(str08));
	printf("issame:%d, str09:'%s', ft:'%d', og:'%d'\n", (atoi(str09) == ft_atoi(str09) ? 1 : 0), str09, ft_atoi(str09), atoi(str09));
	printf("issame:%d, str10:'%s', ft:'%d', og:'%d'\n", (atoi(str10) == ft_atoi(str10) ? 1 : 0), str10, ft_atoi(str10), atoi(str10));
	printf("issame:%d, str11:'%s', ft:'%d', og:'%d'\n", (atoi(str11) == ft_atoi(str11) ? 1 : 0), str11, ft_atoi(str11), atoi(str11));
	printf("issame:%d, str12:'%s', ft:'%d', og:'%d'\n", (atoi(str12) == ft_atoi(str12) ? 1 : 0), str12, ft_atoi(str12), atoi(str12));
	printf("issame:%d, str13:'%s', ft:'%d', og:'%d'\n", (atoi(str13) == ft_atoi(str13) ? 1 : 0), str13, ft_atoi(str13), atoi(str13));
	printf("issame:%d, str14:'%s', ft:'%d', og:'%d'\n", (atoi(str14) == ft_atoi(str14) ? 1 : 0), str14, ft_atoi(str14), atoi(str14));
	printf("issame:%d, str15:'%s', ft:'%d', og:'%d'\n", (atoi(str15) == ft_atoi(str15) ? 1 : 0), str15, ft_atoi(str15), atoi(str15));
	printf("issame:%d, str16:'%s', ft:'%d', og:'%d'\n", (atoi(str16) == ft_atoi(str16) ? 1 : 0), str16, ft_atoi(str16), atoi(str16));
	printf("issame:%d, str17:'%s', ft:'%d', og:'%d'\n", (atoi(str17) == ft_atoi(str17) ? 1 : 0), str17, ft_atoi(str17), atoi(str17));
	printf("issame:%d, str18:'%s', ft:'%d', og:'%d'\n", (atoi(str18) == ft_atoi(str18) ? 1 : 0), str18, ft_atoi(str18), atoi(str18));
	printf("issame:%d, str19:'%s', ft:'%d', og:'%d'\n", (atoi(str19) == ft_atoi(str19) ? 1 : 0), str19, ft_atoi(str19), atoi(str19));
	printf("issame:%d, str20:'%s', ft:'%d', og:'%d'\n", (atoi(str20) == ft_atoi(str20) ? 1 : 0), str20, ft_atoi(str20), atoi(str20));
	printf("issame:%d, str21:'%s', ft:'%d', og:'%d'\n", (atoi(str21) == ft_atoi(str21) ? 1 : 0), str21, ft_atoi(str21), atoi(str21));
	printf("issame:%d, str22:'%s', ft:'%d', og:'%d'\n", (atoi(str22) == ft_atoi(str22) ? 1 : 0), str22, ft_atoi(str22), atoi(str22));
	printf("issame:%d, str23:'%s', ft:'%d', og:'%d'\n", (atoi(str23) == ft_atoi(str23) ? 1 : 0), str23, ft_atoi(str23), atoi(str23));
	printf("issame:%d, str24:'%s', ft:'%d', og:'%d'\n", (atoi(str24) == ft_atoi(str24) ? 1 : 0), str24, ft_atoi(str24), atoi(str24));
	printf("issame:%d, str25:'%s', ft:'%d', og:'%d'\n", (atoi(str25) == ft_atoi(str25) ? 1 : 0), str25, ft_atoi(str25), atoi(str25));

	if (
		atoi(str00) != ft_atoi(str00) ||
		atoi(str01) != ft_atoi(str01) ||
		atoi(str02) != ft_atoi(str02) ||
		atoi(str03) != ft_atoi(str03) ||
		atoi(str04) != ft_atoi(str04) ||
		atoi(str05) != ft_atoi(str05) ||
		atoi(str06) != ft_atoi(str06) ||
		atoi(str07) != ft_atoi(str07) ||
		atoi(str08) != ft_atoi(str08) ||
		atoi(str09) != ft_atoi(str09) ||
		atoi(str10) != ft_atoi(str10) ||
		atoi(str11) != ft_atoi(str11) ||
		atoi(str12) != ft_atoi(str12) ||
		atoi(str13) != ft_atoi(str13) ||
		atoi(str14) != ft_atoi(str14) ||
		atoi(str15) != ft_atoi(str15) ||
		atoi(str16) != ft_atoi(str16) ||
		atoi(str17) != ft_atoi(str17) ||
		atoi(str18) != ft_atoi(str18) ||
		atoi(str19) != ft_atoi(str19) ||
		atoi(str20) != ft_atoi(str20) ||
		atoi(str21) != ft_atoi(str21) ||
		atoi(str22) != ft_atoi(str22) ||
		atoi(str23) != ft_atoi(str23) ||
		atoi(str24) != ft_atoi(str24) ||
		atoi(str25) != ft_atoi(str25)
		)
		result_flg = 0;

	if (result_flg)
		printf("SUCCESS!\n");
	else
		printf("fail...............\n");
	return 0;
}