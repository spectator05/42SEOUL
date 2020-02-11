#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	char **arr;
	int arr_size;
	int i;
	char str[1024] = "apple";

	arr_size = 5;
	arr = (char **)malloc(sizeof(char)  * arr_size);
	i = 0;
	while (i < arr_size)
	{
		arr[i++] = (char *)malloc(sizeof(char) * 6);
	}
	arr[0] = str;
	printf("%s", arr[0]);
}
