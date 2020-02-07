#include <string.h>
#include <stdio.h>

char *ft_strdup(char *src);

int main(void)
{
	char str1[0];
	char str2[] = "1";
	char str3[] = "a";
	char str4[] = "asfdaf";
	char str5[] = "";
	printf("str1[0] std : %s \n", strdup(str1));
	printf("str1[0] ft : %s \n", ft_strdup(str1));
	printf("1 std : %s \n", strdup(str2));
	printf("1 ft : %s \n", ft_strdup(str2));
	printf("a std : %s \n", strdup(str3));
	printf("a ft : %s \n", ft_strdup(str3));
	printf("asfdaf std : %s \n", strdup(str4));
	printf("asfdaf ft : %s \n", ft_strdup(str4));
	printf("\"\" std : %s \n", strdup(str5));
	printf("\"\" ft : %s \n", ft_strdup(str5));
}
