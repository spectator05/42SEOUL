#include <unistd.h>

void ft_putnbr(int nb);

int	main(void)
{
	int i1 = 0;
	int i2 = 2147483647;
	int i3 = -2147483648;

	ft_putnbr(i1);
	write(1, &"\n", 1);
	ft_putnbr(i2);
	write(1, &"\n", 1);
	ft_putnbr(i3);
	write(1, &"\n", 1);
}