#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char	*str, char	*charset);

int	main(void)
{
	char	*str;
	char	*charset;
	char	**split_pointer;
	int		index;

	str = "abc1def23ghi123jkl2mno3pqr13stu3vxw321yz";
	charset = "123";

	split_pointer = ft_split(str, charset);
	index = 0;
	printf("-------------------------------------------\n");
	printf("string = %s\ncharset = %s\n\n", str, charset);
	while (index < 9)
	{
		printf("%dº split = %s\n", (index + 1), split_pointer[index]);
		++index;
	}
	free(split_pointer);
	printf("-------------------------------------------\n");
	return (0);
}