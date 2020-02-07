#include <stdio.h>
#include "ft_abs.h"
#include <stdlib.h>

int main(int argc, char **argv){
	int i;

	i = atoi(argv[argc - 1]);

	printf("%d\n", ABS(i));
}
