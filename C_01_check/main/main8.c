#include <stdio.h>
extern	void	ft_sort_int_tab(int	*tab, int	size);

int	main()
{
	int	arr1[20] = {4,3,1,2};
	int	i;

	ft_sort_int_tab(arr1, 4);

	i = 0;
	while(i < 4)
	{
		printf("%d",arr1[i]);
		i++;
	}
	return 0;
}
