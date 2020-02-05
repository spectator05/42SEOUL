#include <stdio.h>

int ft_is_prime(int nb);

int	main(void)
{
	printf("-1 : %d\n", ft_is_prime(-1));
	printf("0 : %d\n", ft_is_prime(0));
	printf("1 : %d\n", ft_is_prime(1));
	printf("2 : %d\n", ft_is_prime(2));
	printf("3 : %d\n", ft_is_prime(3));
	printf("2147483647 : %d\n", ft_is_prime(2147483647));
	printf("1223 : %d\n", ft_is_prime(1223));
}
