#include <stdio.h>

int	ft_recursive_factorial(int nb);

int main()
{
	printf("0 : %d\n", ft_recursive_factorial(0));
	printf("1 : %d\n", ft_recursive_factorial(1));
	printf("2 : %d\n", ft_recursive_factorial(2));
	printf("12 : %d\n", ft_recursive_factorial(12));
	printf("46 : %d\n", ft_recursive_factorial(46));
	printf("47 : %d\n", ft_recursive_factorial(47));
	printf("-1 : %d\n", ft_recursive_factorial(-1));
}
