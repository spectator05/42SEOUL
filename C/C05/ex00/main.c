#include <stdio.h>

int	ft_iterative_factorial(int nb);

int main()
{
	printf("0 : %d\n", ft_iterative_factorial(0));
	printf("1 : %d\n", ft_iterative_factorial(1));
	printf("2 : %d\n", ft_iterative_factorial(2));
	printf("20 : %d\n", ft_iterative_factorial(20));
	printf("46 : %d\n", ft_iterative_factorial(46));
	printf("47 : %d\n", ft_iterative_factorial(47));
	printf("-1 : %d\n", ft_iterative_factorial(-1));
}
