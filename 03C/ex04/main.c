#include <stdio.h>
#include <string.h>
extern	char	*ft_strstr(char	*str, char	*to_find);

int	main()
{
	char	str1[20] = "abcdighijklmnop";
	char	str2[3] = "ij";

	printf("%s\n", strstr(str1, str2));
	printf("ft : %s", ft_strstr(str1, str2));
	return 0;
	}
