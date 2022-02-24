#include <stdio.h>
extern	char	*ft_strlowcase(char	*str);

int	main()
{
	char str1[20] = "LOW NOW!";

	ft_strlowcase(str1);
	printf ("%s",str1);
			return 0;
}
