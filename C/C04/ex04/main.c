#include <stdio.h>

void	ft_putnbr_base(int nbr, char *str);

int main(void)
{
	printf("print 10 as [01]");
	ft_putnbr_base(10, "01");
	printf("\naaprint 13451558 as [0123456789]");
	ft_putnbr_base(-13451558, "aa0123456789");
	printf("\nprint 16777215 as [0123456789ABCDEF]");
	ft_putnbr_base(16777215, "0123456789ABCDEF");
	printf("\nprint 16777215 as [012345+678-9ABCDEF]");
	ft_putnbr_base(16777215, "012345+678-ABCDEF");
	printf("\nprint 0 as ");
	ft_putnbr_base(0, "");
}
