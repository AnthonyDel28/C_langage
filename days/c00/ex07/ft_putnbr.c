#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_putnbr(int nb)
{
	if(nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if(nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int	main()
{
	ft_putnbr(-45);
	return(0);
}