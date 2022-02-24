#include <stdio.h>
extern	void	ft_putstr_non_printable(char	*str);

int	main()
{
	char	num2[] = {-128};

	ft_putstr_non_printable(num2);
	printf("\n");
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	return 0;
}
