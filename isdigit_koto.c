#include "libft.h"
#include <stdio.h>
#include <ctype.h>
int main(void){
	int result_flg = 1;
	for (int i = -5; i < 135; i++){
		printf("%3d:%c , ft_isdigit:%d , origin_isdigit:%d ,issame:%d\n",i,i,ft_isdigit(i),isdigit(i), (ft_isdigit(i)==isdigit(i) ? 1 : 0) );
		if(result_flg && ft_isdigit(i)!=isdigit(i))
			result_flg = 0;
	}
	if(result_flg)
		printf("SUCCESS!\n");
	else
		printf("fail...............\n");
	return 0;
}
