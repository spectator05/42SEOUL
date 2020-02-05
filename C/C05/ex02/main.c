#include <stdio.h>

int ft_iterative_power(int nb, int power);

int main(void)
{
	printf("0^0 : %d\n", ft_iterative_power(0, 0));
	printf("-1^0 : %d\n", ft_iterative_power(-1, 0));
	printf("-1^1 : %d\n", ft_iterative_power(-1, 1));
	printf("-1^11 : %d\n", ft_iterative_power(-1, 11));
	printf("-1^-1 : %d\n", ft_iterative_power(-1, -1));
	printf("-9^1 : %d\n", ft_iterative_power(-9, 1));
	printf("-9^0 : %d\n", ft_iterative_power(-9, 0));
	printf("-9^-1 : %d\n", ft_iterative_power(-9, -1));
	printf("5^5 : %d\n", ft_iterative_power(5, 5));
	printf("10^9 : %d\n", ft_iterative_power(10, 9));
	printf("-9^5 : %d\n", ft_iterative_power(-9, 5));
}
