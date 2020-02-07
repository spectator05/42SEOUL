#include <unistd.h>
#include <stdio.h>

void ft_putnbr(int nb);

int	main(void)
{
	int i1 = -38572478;
	ft_putnbr(i1);
	write(1, &"\n", 1);
	printf("%d\n", i1);
}
