#include <stdio.h>
#include <unistd.h>

int		ft_ultimate_range(int **range, int min, int max);

void	print_arr(int **arr, int min, int max)
{
	unsigned int i;
	unsigned int j;

	i = max - min;
	j = 0;
	while (i > j)
	{
		printf("%d ", *arr[j]);
		j++;
	}
	printf("\n");
}

int main(void)
{
	int **arr;

	unsigned int size = ft_ultimate_range(arr, -2147483648, 2147483647);
}
