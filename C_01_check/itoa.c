#include <unistd.h>
#include <stdio.h>

char	*ft_itoa(int	a,char	*charr)
{
	int		len;
	int		mom;
	int		i;

	mom = 1;
	len = -1;
	if (a == 0)
		len = 0;
	else
		while (a > 0)
		{
			a /= 10;
			len++;
			mom *= 10;
		}
	mom /= 10;
	i = 0;
	while (i <= len)
	{
		charr[i] = a / mom + '0';
		a -= ((a / mom) * mom);
		mom /= 10;
		i++;
	}
	return(charr);
}

int	main(void)
{
	printf("%s",ft_itoa(37,"  "));
	return 0;
}
