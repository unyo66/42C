#include <stdio.h>
extern	char	*ft_strcapitalize(char *str);

int	main()
{
	char	str1[50] = "*i'd likE to go h0me now";
	char	str2[] = "salut, comment tu vas ? 42mots quarante-deux; cinquate+et+un";

	ft_strcapitalize(str1);
	ft_strcapitalize(str2);
	printf ("%s\n",str1);
	printf ("%s",str2);
		return 0;
}
