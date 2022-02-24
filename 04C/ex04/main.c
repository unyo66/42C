#include <unistd.h>
extern	int	ft_putnbr_base(int	nbr, char	*base);

int	main()
{
	int		nbr;
	char	base[17] = "0123456789abcdef";

	nbr = 1 << 31;
	ft_putnbr_base(nbr, base);
	return 0;;
}
