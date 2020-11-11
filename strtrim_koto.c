#include "libft.h"
#include <stdio.h>
int main(){
    char s1_00[]=        "momotoyamamo";
    char set00[]=        "mo";
    printf("s1:%s, set:%s, ret:%s\n", s1_00, set00, ft_strtrim(s1_00, set00));

    char s1_01[]=   "tozotzotoztttzoztzotzotzotzotooozzoztozmotoyamatoztoz";
    char set01[]=   "toz";
    printf("s1:%s, set:%s, ret:%s\n", s1_01, set01, ft_strtrim(s1_01, set01));

    char s1_02[]=   "motoyama";
    char set02[]=   "";
    printf("s1:%s, set:%s, ret:%s\n", s1_02, set02, ft_strtrim(s1_02, set02));

    char s1_03[]=   "";
    char set03[]=   "mo";
    printf("s1:%s, set:%s, ret:%s\n", s1_03, set03, ft_strtrim(s1_03, set03));
}
