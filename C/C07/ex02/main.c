#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max);


int main(void)
{
	int **arr;
	arr = (int**)malloc(sizeof(int*));
	int size = ft_ultimate_range(arr, -2147483648, 2147483647);
}
