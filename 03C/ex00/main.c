#include <string.h>
#include <stdio.h>
extern	int	ft_strcmp(char	*s1, char	*s2);

int	main()
{
	int		ret1;
	int		ret2;
	char	*s1 = "abc1";
	char	*s2 = "abc";

	ret1 = ft_strcmp(s1, s2);
	printf("ft : %d\n",ret1);
	ret2 = strcmp(s1, s2);
	printf("%d",ret2);
return 0;
}

