#include <stdio.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int		main(void)
{
	printf("%s\n", ft_convert_base("---+--0098711ea3a", "0123456789", "0123456789"));
	printf("-98711\n");
	printf("%s\n", ft_convert_base("-1234567890", "0123456789", "abcdefghij"));
	printf("-bcdefghija\n");
	printf("%s\n", ft_convert_base("-+-+- -+zxye", "eyxz", "EYXZ"));
	printf("E\n");
	printf("%s\n", ft_convert_base("  -+-+--+zxye", "eyxz", "EYXZ"));
	printf("ZXYE\n");
	printf("%s\n", ft_convert_base("   -+1234", "12345", ""));
	printf("(null)\n");
	printf("%s\n", ft_convert_base("43210", "01234", "12345"));
	printf("54321\n");
}
