#include <string.h>
#include <stdio.h>
extern	int	ft_strncmp(char	*s1, char	*s2, unsigned int	n);

int	main()
{
	int		ret1;
	int		ret2;
	char	*s1 = "";
	char	*s2 = "";

	ret1 = ft_strncmp(s1, s2, 4);
	printf("ft : %d\n",ret1);
	ret2 = strncmp(s1, s2, 4);
	printf("%d",ret2);
return 0;
}

