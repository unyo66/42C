#include <stdio.h>
extern	int	ft_str_is_numeric(char	*str);

int	main()
{
	char	str1[] = "402431207";
	char	str2[] = "With123numbers456";

	printf ("%d\n",ft_str_is_numeric(str1));
	printf ("%d",ft_str_is_numeric(str2));
	return 0;
}
