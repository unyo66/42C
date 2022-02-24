#include <stdio.h>
extern void ft_ultimate_div_mod(int	*a, int	*b);

int	main()
{
	int	c;
	int	d;

	c = 43;
	d = 12;
	ft_ultimate_div_mod(&c, &d);
	printf("%d, %d",c,d);
return 0;	
}
