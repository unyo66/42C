#include <stdio.h>
extern	int	ft_str_is_alpha(char	*str);

int	main()
{
	char	str1[] = "OnlyAlphbet";
	char	str2[] = "With123numbers456";

	printf ("%d\n",ft_str_is_alpha(str1));
	printf ("%d",ft_str_is_alpha(str2));
	return 0;
}
