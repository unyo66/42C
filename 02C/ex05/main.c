#include <stdio.h>
extern	int	ft_str_is_uppercase(char	*str);

int	main()
{
	char	str1[] = "ONLYUPPER";
	char	str2[] = "WIthloWeR";

	printf ("%d\n",ft_str_is_uppercase(str1));
	printf ("%d",ft_str_is_uppercase(str2));
	return 0;
}
