#include "libft.h"
#include <stdio.h>
char	hide_over5(unsigned int i, char c)
{
	if (i >= 5)
		return ('*');
	return (c);
}

int main(){
	char str00[] = "agatsuma zennitsu";
	char str01[] = "agatsu";
	char str02[] = "agats";
	char str03[] = "";

	printf("=========\nbefore : %s\n", str00);
	printf("after  : %s\n", ft_strmapi(str00, hide_over5));

	printf("=========\nbefore : %s\n", str01);
	printf("after  : %s\n", ft_strmapi(str01, hide_over5));

	printf("=========\nbefore : %s\n", str02);
	printf("after  : %s\n", ft_strmapi(str02, hide_over5));

	printf("=========\nbefore : %s\n", str03);
	printf("after  : %s\n", ft_strmapi(str03, hide_over5));
}
