#include "libft.h"
int main(){
	for(int j = -30; j < 104; j++)
	{
		for (int i = 0; i < 3; i++){
			ft_putnbr_fd(j, i);
			ft_putstr_fd(" ", i);
			ft_putnbr_fd(j, i);
			ft_putstr_fd(" ", i);
			ft_putnbr_fd(j, i);
			ft_putstr_fd(" \n", i);
		}
	}
}