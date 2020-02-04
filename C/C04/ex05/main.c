#include <stdio.h>

int ft_atoi_base(char *str, char *base);

int main(int argc , char * argv[])
{
	char *str = argv[1];
	char *base = argv[2];
	int i;
	i = ft_atoi_base(str, base);
	printf("%d", i);
}