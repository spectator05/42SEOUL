#include <stdio.h>

int ft_atoi(char *str);

int main(int argc , char * argv[])
{
	char *str = argv[argc - 1];
	int i;
	i = ft_atoi(str);
	printf("%d\n", i);
}
