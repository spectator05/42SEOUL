#include <stdio.h>

int ft_atoi(char *str);

int main(int argc , char * argv[])
{
	char *str = argv[1];
	int i;
	i = ft_atoi(str);
	printf("%d", i);
}