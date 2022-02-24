#include <string.h>
#include <stdio.h>
extern	char	*ft_strcat(char	*dest, char	*src);

int	main()
{
	char	dest1[20] = "HELLO";
	char	src1[5] = "WORld";
	char	dest2[20] = "HELLO";
	char	src2[5] = "WORld";
	ft_strcat(dest1, src1);
	printf("%s\n",dest1);
	strcat(dest2, src2);
	printf("%s", dest2);
	return 0;
}
