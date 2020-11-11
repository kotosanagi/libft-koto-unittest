#include "libft.h"
#include <stdio.h>
#include <ctype.h>
int main(void){
	int result_flg = 1;
	for (int i = -5; i < 135; i++){
		printf("%3d:%c , ft_isalpha:%d , origin_isalpha:%d ,issame:%d\n",i,i,ft_isalpha(i),isalpha(i), (ft_isalpha(i)==isalpha(i) ? 1 : 0) );
		if(result_flg && ft_isalpha(i)!=isalpha(i))
			result_flg = 0;
	}
	if(result_flg)
		printf("SUCCESS!\n");
	else
		printf("fail...............\n");
	return 0;
}
