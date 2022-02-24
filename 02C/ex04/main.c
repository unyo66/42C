#include <stdio.h>
extern	int	ft_str_is_lowercase(char	*str);

int	main()
{
	char	str1[] = "onlylower";
	char	str2[] = "WIthUppER";

	printf ("%d\n",ft_str_is_lowercase(str1));
	printf ("%d",ft_str_is_lowercase(str2));
	return 0;
}
