#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);
void	ft_show_tab(struct s_stock_str *par);

int	main(void)
{
	char	*av1[] = {"123", "3210", "abcde", "fedcba"};
	char	*av2[] = {"", "", "", ""};
	char	*av3[] = {"123", "3210", 0, "fedcba"};
	char	*av4[] = {0, 0, 0, 0};
	char	*av5[] = {"123", "3210", 0, "fedcba"};

	printf("-----------------------------------------------\n");
	printf("*av1[] = {\"123\", \"3210\", \"abcde\", \"fedcba\"};\nusing '\\t' to change the value of the copy field\n");
	printf("ft_strs_to_tab(4, av1)\n\n");
	t_stock_str	*array = ft_strs_to_tab(4, av1);
	array[0].copy[0] = '\t';
	array[1].copy[1] = '\t';
	array[2].copy[2] = '\t';
	array[3].copy[3] = '\t';
	ft_show_tab(array);
	free(array);
	printf("-----------------------------------------------\n");

	printf("*av2[] = {\"\", \"\", \"\", \"\"};\n");
	printf("ft_strs_to_tab(4, av2)\n\n");
	array = ft_strs_to_tab(4, av2);
	ft_show_tab(array);
	free(array);
	printf("-----------------------------------------------\n");

	printf("*av3[] = {\"123\", \"3210\", 0, \"fedcba\"};\n");
	printf("ft_strs_to_tab(4, 0)\n\n");
	array = ft_strs_to_tab(4, 0);
	ft_show_tab(array);
	free(array);
	printf("-----------------------------------------------\n");

	printf("*av3[] = {\"123\", \"3210\", 0, \"fedcba\"};\n");
	printf("ft_strs_to_tab(4, av3)\n\n");
	array = ft_strs_to_tab(4, av3);
	ft_show_tab(array);
	free(array);
	printf("-----------------------------------------------\n");

	printf("*av4[] = {0, 0, 0, 0};\n");
	printf("ft_strs_to_tab(4, av4)\n\n");
	array = ft_strs_to_tab(4, av4);
	ft_show_tab(array);
	free(array);
	printf("-----------------------------------------------\n");

	printf("*av5[] = {\"123\", \"3210\", 0, \"fedcba\"};\n");
	printf("ft_strs_to_tab(-1, av5)\n\n");
	array = ft_strs_to_tab(-1, av5);
	ft_show_tab(array);
	free(array);
	printf("-----------------------------------------------\n");

	return (0);
}
