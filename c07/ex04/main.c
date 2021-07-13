#include <stdio.h>
#include <stdlib.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	char	*input_base;
	char	*output_base;
	char	*nbr_converted;

	printf("%s\n", "DEC TO HEX:");

	input_base = "0123456789";
	output_base = "0123456789abcdef";

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+--0", input_base, output_base);
	printf("-----------------------------------\n");
	printf("nbr = \\t\\n\\v\\f\\r +-+--0\ninput base = %s\noutput base = %s\nnbr converted = %s\n", input_base, output_base, nbr_converted);
	free(nbr_converted);

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+--2147483648", input_base, output_base);
	printf("-----------------------------------\n");
	printf("nbr = \\t\\n\\v\\f\\r +-+--2147483648\ninput base = %s\noutput base = %s\nnbr converted = %s\n", input_base, output_base, nbr_converted);
	free(nbr_converted);

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+-2147483647", input_base, output_base);
	printf("-----------------------------------\n");
	printf("nbr = \\t\\n\\v\\f\\r +-+-2147483647\ninput base = %s\noutput base = %s\nnbr converted = %s\n", input_base, output_base, nbr_converted);
	free(nbr_converted);

	printf("-----------------------------------\n");
	printf("%s\n", "\nDEC TO DEC:");

	input_base = "0123456789";
	output_base = "0123456789";

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+--0", input_base, output_base);
	printf("-----------------------------------\n");
	printf("nbr = \\t\\n\\v\\f\\r +-+--0\ninput base = %s\noutput base = %s\nnbr converted = %s\n", input_base, output_base, nbr_converted);
	free(nbr_converted);

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+--2147483648", input_base, output_base);
	printf("-----------------------------------\n");
	printf("nbr = \\t\\n\\v\\f\\r +-+--2147483648\ninput base = %s\noutput base = %s\nnbr converted = %s\n", input_base, output_base, nbr_converted);
	free(nbr_converted);

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+-2147483647", input_base, output_base);
	printf("-----------------------------------\n");
	printf("nbr = \\t\\n\\v\\f\\r +-+-2147483647\ninput base = %s\noutput base = %s\nnbr converted = %s\n", input_base, output_base, nbr_converted);
	free(nbr_converted);

	printf("-----------------------------------\n");
	printf("%s\n", "\nDEC TO OCT:");

	input_base = "0123456789";
	output_base = "01234567";

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+--0", input_base, output_base);
	printf("-----------------------------------\n");
	printf("nbr = \\t\\n\\v\\f\\r +-+--0\ninput base = %s\noutput base = %s\nnbr converted = %s\n", input_base, output_base, nbr_converted);
	free(nbr_converted);

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+--2147483648", input_base, output_base);
	printf("-----------------------------------\n");
	printf("nbr = \\t\\n\\v\\f\\r +-+--2147483648\ninput base = %s\noutput base = %s\nnbr converted = %s\n", input_base, output_base, nbr_converted);
	free(nbr_converted);

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+-2147483647", input_base, output_base);
	printf("-----------------------------------\n");
	printf("nbr = \\t\\n\\v\\f\\r +-+-2147483647\ninput base = %s\noutput base = %s\nnbr converted = %s\n", input_base, output_base, nbr_converted);
	free(nbr_converted);

	printf("-----------------------------------\n");
	printf("%s\n", "\nHEX TO DEC:");

	input_base = "0123456789abcdef";
	output_base = "0123456789";

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+--0", input_base, output_base);
	printf("-----------------------------------\n");
	printf("nbr = \\t\\n\\v\\f\\r +-+--0\ninput base = %s\noutput base = %s\nnbr converted = %s\n", input_base, output_base, nbr_converted);
	free(nbr_converted);

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+--2147483648", input_base, output_base);
	printf("-----------------------------------\n");
	printf("nbr = \\t\\n\\v\\f\\r +-+--2147483648\ninput base = %s\noutput base = %s\nnbr converted = %s\n", input_base, output_base, nbr_converted);
	free(nbr_converted);

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+-2147483647", input_base, output_base);
	printf("-----------------------------------\n");
	printf("nbr = \\t\\n\\v\\f\\r +-+-2147483647\ninput base = %s\noutput base = %s\nnbr converted = %s\n", input_base, output_base, nbr_converted);
	free(nbr_converted);

	printf("-----------------------------------\n");
	printf("%s\n", "\nINVALID BASE:");

	input_base = "0123456789abcdeff";
	output_base = "0123456789";

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+--0", input_base, output_base);
	printf("-----------------------------------\n");
	printf("nbr = \\t\\n\\v\\f\\r +-+--0\ninput base = %s\noutput base = %s\nnbr converted = %s\n", input_base, output_base, nbr_converted);
	free(nbr_converted);

	input_base = "0123456789abcdef";
	output_base = "01234567899";

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+--0", input_base, output_base);
	printf("-----------------------------------\n");
	printf("nbr = \\t\\n\\v\\f\\r +-+--0\ninput base = %s\noutput base = %s\nnbr converted = %s\n", input_base, output_base, nbr_converted);
	free(nbr_converted);

	input_base = "0123456789abcdef";
	output_base = "9";

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+--80000000", input_base, output_base);
	printf("-----------------------------------\n");
	printf("nbr = \\t\\n\\v\\f\\r +-+--80000000\ninput base = %s\noutput base = %s\nnbr converted = %s\n", input_base, output_base, nbr_converted);
	free(nbr_converted);

	input_base = "0123456789abcdef";
	output_base = "9";

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+-7fffffff", input_base, output_base);
	printf("-----------------------------------\n");
	printf("nbr = \\t\\n\\v\\f\\r +-+-7fffffff\ninput base = %s\noutput base = %s\nnbr converted = %s\n", input_base, output_base, nbr_converted);
	free(nbr_converted);

	input_base = "0123456789abcdef";
	output_base = "9";

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+--80000000", input_base, output_base);
	printf("-----------------------------------\n");
	printf("nbr = \\t\\n\\v\\f\\r +-+--80000000\ninput base = %s\noutput base = %s\nnbr converted = %s\n", input_base, output_base, nbr_converted);
	free(nbr_converted);

	input_base = "0123456789abcdef";
	output_base = "9";

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+-7fffffff", input_base, output_base);
	printf("-----------------------------------\n");
	printf("nbr = \\t\\n\\v\\f\\r +-+-7fffffff\ninput base = %s\noutput base = %s\nnbr converted = %s\n", input_base, output_base, nbr_converted);
	free(nbr_converted);

	input_base = "0123456789abcdef";
	output_base = "9";

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+--80000000", input_base, output_base);
	printf("-----------------------------------\n");
	printf("nbr = \\t\\n\\v\\f\\r +-+--80000000\ninput base = %s\noutput base = %s\nnbr converted = %s\n", input_base, output_base, nbr_converted);
	free(nbr_converted);

	input_base = "0123456789abcdef";
	output_base = "9";

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+-7fffffff", input_base, output_base);
	printf("-----------------------------------\n");
	printf("nbr = \\t\\n\\v\\f\\r +-+-7fffffff\ninput base = %s\noutput base = %s\nnbr converted = %s\n", input_base, output_base, nbr_converted);
	free(nbr_converted);

	printf("-----------------------------------\n");
	printf("%s\n", "\nNO VALUE:");

	input_base = "0123456789abcdef";
	output_base = "01";

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+-+-", input_base, output_base);
	printf("-----------------------------------\n");
	printf("nbr = \\t\\n\\v\\f\\r +-+-+-\ninput base = %s\noutput base = %s\nnbr converted = %s\n", input_base, output_base, nbr_converted);
	free(nbr_converted);

	nbr_converted = ft_convert_base("\t\n\v\f\r QQQQQQ", input_base, output_base);
	printf("-----------------------------------\n");
	printf("nbr = \\t\\n\\v\\f\\r QQQQQQ\ninput base = %s\noutput base = %s\nnbr converted = %s\n", input_base, output_base, nbr_converted);
	free(nbr_converted);

	printf("-----------------------------------\n");
	printf("%s\n", "\nHEX TO BIN:");

	input_base = "0123456789abcdef";
	output_base = "01";

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+--0", input_base, output_base);
	printf("-----------------------------------\n");
	printf("nbr = \\t\\n\\v\\f\\r +-+--0\ninput base = %s\noutput base = %s\nnbr converted = %s\n", input_base, output_base, nbr_converted);
	free(nbr_converted);

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+--80000000", input_base, output_base);
	printf("-----------------------------------\n");
	printf("nbr = \\t\\n\\v\\f\\r +-+--80000000\ninput base = %s\noutput base = %s\nnbr converted = %s\n", input_base, output_base, nbr_converted);
	free(nbr_converted);

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+-7fffffff", input_base, output_base);
	printf("-----------------------------------\n");
	printf("nbr = \\t\\n\\v\\f\\r +-+-7fffffff\ninput base = %s\noutput base = %s\nnbr converted = %s\n", input_base, output_base, nbr_converted);
	free(nbr_converted);

	printf("-----------------------------------\n");
	printf("%s\n", "\nBIN TO HEX:");

	input_base = "01";
	output_base = "0123456789abcdef";

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+--0", input_base, output_base);
	printf("-----------------------------------\n");
	printf("nbr = \\t\\n\\v\\f\\r +-+--0\ninput base = %s\noutput base = %s\nnbr converted = %s\n", input_base, output_base, nbr_converted);
	free(nbr_converted);

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+---10000000000000000000000000000000", input_base, output_base);
	printf("-----------------------------------\n");
	printf("nbr = \\t\\n\\v\\f\\r +-+--10000000000000000000000000000000\ninput base = %s\noutput base = %s\nnbr converted = %s\n", input_base, output_base, nbr_converted);
	free(nbr_converted);

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+-1111111111111111111111111111111", input_base, output_base);
	printf("-----------------------------------\n");
	printf("nbr = \\t\\n\\v\\f\\r +-+-1111111111111111111111111111111\ninput base = %s\noutput base = %s\nnbr converted = %s\n", input_base, output_base, nbr_converted);
	free(nbr_converted);

	printf("-----------------------------------\n");
	return (0);
}
