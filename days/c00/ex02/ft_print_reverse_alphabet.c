#include <unistd.h>

void	ft_print_reverse_alphabet()
{
	int a;

	a = 'z';
	while(a >= 'a')
	{
		write(1, &a, 1);
		a--;
	}
	write(1, "\n", 1);
}