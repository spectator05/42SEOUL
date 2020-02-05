#include <stdio.h>

int ft_find_next_prime(int nb);

int main(void)
{
	printf("-1 : %d\n", ft_find_next_prime(-1));
	printf("0 : %d\n", ft_find_next_prime(0));
	printf("1 : %d\n", ft_find_next_prime(1));
	printf("2 : %d\n", ft_find_next_prime(2));
	printf("10 : %d\n", ft_find_next_prime(10));
	printf("2147395600 : %d\n", ft_find_next_prime(2147395600));
	printf("2147395599 : %d\n", ft_find_next_prime(2147395599));
}
