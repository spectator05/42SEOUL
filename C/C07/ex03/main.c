#include <stdio.h>


char *ft_strjoin(int size, char **strs, char *sep);

int main(int argc, char **argv)
{
	char *str;
	char sep[] = "*";
	str = ft_strjoin(argc, argv, sep);
	printf("%s", str);
}
