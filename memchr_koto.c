#include "libft.h"
#include <stdio.h>
#include <string.h>
int main(void)
{
	char c = 't';
	size_t n = 4;
	char s1[] = "";
	char s2[] = "kotokoto";
	char s3[] = "koto";
	char s4[] = "nezuko";
	char s5[] = "        ";
	int result_flg = 1;

	printf("c : %c\n",c);
	printf("n : %zu\n",n);
	printf("s:%10s, ft_memchr:%10s , og_memchr:%10s , issame:%d\n", s1, ft_memchr(s1,c,n), memchr(s1,c,n), (ft_memchr(s1,c,n) == memchr(s1,c,n) ? 1 : 0));
	printf("s:%10s, ft_memchr:%10s , og_memchr:%10s , issame:%d\n", s2, ft_memchr(s2,c,n), memchr(s2,c,n), (ft_memchr(s2,c,n) == memchr(s2,c,n) ? 1 : 0));
	printf("s:%10s, ft_memchr:%10s , og_memchr:%10s , issame:%d\n", s3, ft_memchr(s3,c,n), memchr(s3,c,n), (ft_memchr(s3,c,n) == memchr(s3,c,n) ? 1 : 0));
	printf("s:%10s, ft_memchr:%10s , og_memchr:%10s , issame:%d\n", s4, ft_memchr(s4,c,n), memchr(s4,c,n), (ft_memchr(s4,c,n) == memchr(s4,c,n) ? 1 : 0));
	printf("s:%10s, ft_memchr:%10s , og_memchr:%10s , issame:%d\n", s5, ft_memchr(s5,c,n), memchr(s5,c,n), (ft_memchr(s5,c,n) == memchr(s5,c,n) ? 1 : 0));
	if (result_flg && (ft_memchr(s1,c,n) != memchr(s1,c,n) ||
					ft_memchr(s2,c,n) != memchr(s2,c,n) ||
					ft_memchr(s3,c,n) != memchr(s3,c,n) ||
					ft_memchr(s4,c,n) != memchr(s4,c,n) ||
					ft_memchr(s5,c,n) != memchr(s5,c,n)))
	{
		result_flg = 0;
	}

	if (result_flg)
		printf("SUCCESS!\n");
	else
		printf("fail...............\n");
	return 0;
}
