#include <stdio.h>
extern	int	ft_atoi(char	*str);

int	main()
{
	char	str[99] = "";
	printf("%d", ft_atoi(str));
	return 0;
}
