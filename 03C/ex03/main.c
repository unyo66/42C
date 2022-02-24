#include <stdio.h>
#include <string.h>
extern char	*ft_strncat(char	*dest, char	*src, unsigned int	nb);

int	main()
{
	char	dest1[20] = "HELLO";
	char	src1[5] = "WORLD";
	char	dest2[20] = "HELLO";
	char	src2[5] = "WORLD";

	strncat(dest1, src1, 3);
	printf("%s\n", dest1);
	ft_strncat(dest2, src2, 3);
	printf("ft : %s", dest2);
	
	return 0;
}
