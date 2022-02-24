#include <stdio.h>
#include <string.h>
extern	char	*ft_strlcat(char	*dest, char	*src, unsigned	int size);

int	main()
{
	char	dest1[20] = "HELLO";
	char	src1[10] = "WORLD123";
	char	dest2[20] = "HELLO";
	char	src2[10] = "WORLD123";

	ft_strlcat(dest1, src1, 4);
	printf("ft : %s\n", dest1);
	printf("ft sizeover : %c\n", dest1[18]);
	strlcat(dest2, src2, 4);
	printf("%s\n", dest2);
	printf("sizeover : %c\n", dest2[18]);
	return 0;
}
