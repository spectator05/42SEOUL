#include <stdio.h>

int ft_sqrt(int nb);

int main(void)
{
	printf("0 : %d\n", ft_sqrt(0));
	printf("1 : %d\n", ft_sqrt(1));
	printf("2 : %d\n", ft_sqrt(2));
	printf("4 : %d\n", ft_sqrt(4));
	printf("9 : %d\n", ft_sqrt(9));
	printf("2147395600 : %d\n", ft_sqrt(2147395600));
	printf("2147483647 : %d\n", ft_sqrt(2147483647));
	printf("-1 : %d\n", ft_sqrt(-1));
}
