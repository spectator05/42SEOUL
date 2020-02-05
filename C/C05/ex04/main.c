#include <stdio.h>

int	ft_fibonacci(int nb);

int main()
{
	printf("0 : %d\n", ft_fibonacci(0));
	printf("1 : %d\n", ft_fibonacci(1));
	printf("2 : %d\n", ft_fibonacci(2));
	printf("20 : %d\n", ft_fibonacci(20));
	printf("30 : %d\n", ft_fibonacci(30));
	printf("43 : %d\n", ft_fibonacci(43));
	printf("-1 : %d\n", ft_fibonacci(-1));
}
