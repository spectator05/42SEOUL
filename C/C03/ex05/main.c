#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int		main(void)
{
	char s0[50] = "pouic";
	char d0[50] = "pouic";
	unsigned int n0 = 0;
	char ss0[50] = "pouic";
	char dd0[50] = "pouic";

	char s1[50] = "Great";
	char d1[50] = "You-are-";
	unsigned int n1 = 14;
	char ss1[50] = "Great";
	char dd1[50] = "You-are-";

	char s2[50] = "Great";
	char d2[50] = "";
	unsigned int n2 = 12;
	char ss2[50] = "Great";
	char dd2[50] = "";

	char s3[50] = "";
	char d3[50] = "You-are-";
	unsigned int n3 = 12;
	char ss3[50] = "";
	char dd3[50] = "You-are-";

	char s4[50] = "";
	char d4[50] = "";
	unsigned int n4 = 12;
	char ss4[50] = "";
	char dd4[50] = "";

	printf("return value \n For strlcat() that means the initial length of dst plus the length of src.\n\n");

	printf("s0      : %s\n", s0);
	printf("d0      : %s\n", d0);
	printf("n0	: %d\n", n0);
	printf("-------------------\n");
	printf("strlcat : %lu\n", strlcat(dd0, ss0, n0));
	printf("result  : %s\n", dd0);
	printf("myfunc  : %u\n", ft_strlcat(d0, s0, n0));
	printf("result  : %s\n", d0);
	printf("\n\n");

	printf("s1      : %s\n", s1);
	printf("d1      : %s\n", d1);
	printf("n1	: %d\n", n1);
	printf("-------------------\n");
	printf("strlcat : %lu\n", strlcat(dd1, ss1, n1));
	printf("result  : %s\n", dd1);
	printf("myfunc  : %u\n", ft_strlcat(d1, s1, n1));
	printf("result  : %s\n", d1);
	printf("\n\n");

	printf("s2      : %s\n", s2);
	printf("d2      : %s\n", d2);
	printf("n1	: %d\n", n1);
	printf("-------------------\n");
	printf("strlcat : %lu\n", strlcat(dd2, ss2, n2));
	printf("result  : %s\n", d2);
	printf("myfunc  : %u\n", ft_strlcat(d2, s2, n2));
	printf("result  : %s\n", d2);
	printf("\n\n");

	printf("s3      : %s\n", s3);
	printf("d3      : %s\n", d3);
	printf("n1	: %d\n", n1);
	printf("-------------------\n");
	printf("strlcat : %lu\n", strlcat(dd3, ss3, n3));
	printf("result  : %s\n", dd3);
	printf("myfunc  : %u\n", ft_strlcat(d3, s3, n3));
	printf("result  : %s\n", d3);
	printf("\n\n");


	printf("s4      : %s\n", s4);
	printf("d4      : %s\n", d4);
	printf("n1	: %d\n", n1);
	printf("-------------------\n");
	printf("strlcat : %lu\n", strlcat(dd4, ss4, n4));
	printf("result  : %s\n", dd4);
	printf("myfunc  : %u\n", ft_strlcat(d4, s4, n4));
	printf("result  : %s\n", d4);
	printf("\n\n");

	return (0);
}
