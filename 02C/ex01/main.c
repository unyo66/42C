#include <stdio.h>
#include <string.h>
extern	char	*ft_strncpy(char	*dest, char	*src, unsigned int	n);

int	main()
{
	char	dest1[7] = "1234567";
	char	src1[3] = "abc";
	char	dest2[4] = "123";
	char	src2[3] = "abc";
		
	printf("%s\n",ft_strncpy(dest1,src1,4));
	printf("%s",strncpy(dest2,src2,4));
	return 0;
}
