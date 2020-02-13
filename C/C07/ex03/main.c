#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
char *ft_strjoin(int size, char **strs, char *sep);

int main(int argc, char **argv)
{
	char *str;
	char sep[] = "";
	char **arg;

	arg = (char**)malloc(sizeof(char *) * 2);
	arg[0] = (char*)malloc(sizeof(char));
	str = ft_strjoin(0, arg, sep);
	printf("%s", str);
}
