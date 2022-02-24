#include <unistd.h>
extern	void	ft_putnbr(int	nb);

void	ft_nl(void)
{
	char	nl;

	nl = '\n';
	write (1, &nl, 1);
}

int	main()
{
	ft_putnbr(0);
	ft_nl();
	ft_putnbr(1);
	ft_nl();
	ft_putnbr(-1);
	ft_nl();
	ft_putnbr(2147483647);
	ft_nl();
	ft_putnbr(-2147483648);
	return 0;
}
