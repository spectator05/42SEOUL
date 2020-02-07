#include <stdio.h>
#include <unistd.h>

int *ft_range(int min, int max);

void print_arr(int *arr, int min, int max)
{
	unsigned int i;
	unsigned int j;

	i = max - min;
	j = 0;
	while (i > j)
	{
		printf("%d ", arr[j]);
		j++;
	}
	printf("\n");
}

int main(void)
{
	int min;
	int max;
	int *arr;

	min = -2147483648; max = 2147483647;
	arr = ft_range(min, max);
	print_arr(arr, min, max);
}
