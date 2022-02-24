#include <stdio.h>
extern	int	ft_str_is_printable(char	*str);

int	main()
{
	char	str1[] = "You've got what you want!!";
	char	str2[] = "No\nyou don't";

	printf ("%d\n",ft_str_is_printable(str1));
	printf ("%d",ft_str_is_printable(str2));
	return 0;
}
