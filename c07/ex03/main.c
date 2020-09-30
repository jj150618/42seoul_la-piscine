#include <stdlib.h>
#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main(void)
{
	char *a[5] = {"ab","cd","1234","-----","qwerQWER"};
	char sep[] = "++_-++";
	char *b = ft_strjoin(4, a, sep);	
	printf("%s\n", b);
	return 0;
}
