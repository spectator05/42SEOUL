#include <stdio.h>

void ft_putstr(char *str);

int	main(void)
{
	char str1[] = "akjgnsadjgnadgjd";
	char str2[] = "";
	char str3[0];

	printf("%s :", str1);
	printf(" ");
	ft_putstr(str1);
	printf("\n%s :", str2);
	ft_putstr(str2);
	printf("\n%s :", str3);
	ft_putstr(str3);
}