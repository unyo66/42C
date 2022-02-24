#include <stdio.h>
extern	void	ft_swap(int	*a, int *b);

int	main()
{
	int	c;
	int	d;

	c = 43;
	d = 12;
	ft_swap(&c,&d);
	printf("%d, %d",c,d);
return 0;
}
