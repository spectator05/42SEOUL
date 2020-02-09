#include "ft_stock_str.h"
#include "ft_strs_to_tab.c"
#include "ft_show_tab.c"

int	main(int argc, char **argv)
{
	struct s_stock_str *str;
	str = ft_strs_to_tab(argc, argv);
	ft_show_tab(str);
}
