#include <stdio.h>
extern	char	*ft_strupcase(char	*str);

int	main()
{
	char str1[20] = "uP n0w!";

	ft_strupcase(str1);
	printf ("%s",str1);
			return 0;
}
