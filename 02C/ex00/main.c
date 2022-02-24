#include <stdio.h>
#include <string.h>
extern	char	*ft_strcpy(char	*dest, char	*src);

int	main()
{
	char	dest1[8] = "12345678";
	char	src1[6] = "abcdef";
	char	dest2[8] = "1234567";
	char	src2[8] = "abcdefg";

	printf("%s\n",ft_strcpy(dest1,src1));
	printf("%s",strcpy(dest2,src2));
	return 0;
}
