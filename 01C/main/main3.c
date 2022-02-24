#include <stdio.h>
extern	void	ft_div_mod(int	a, int	b, int	*div, int	*mod);

int	main()
{
	int c;
	int	d;
	int	e;
	int	f;

	c = 43;
	d = 12;
	ft_div_mod(c,d,&e,&f);
	printf("%d, %d",e,f);
return 0;
}

