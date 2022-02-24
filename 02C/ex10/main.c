#include <stdio.h>
extern	unsigned int	ft_strlcpy(char	*dest, char	*src, unsigned int	size);

int	main()
{
	char	dest1[7] = "1234567";
	char	src1[] = "abcdefg";

	printf ("%u\n",ft_strlcpy(dest1,src1,(unsigned int)5));
	printf ("%s",dest1);
	return 0;
}
