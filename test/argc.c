#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

int	main(int argc, char **argv)
{
	ft_putnbr(argc);
	ft_putchar('\n');
	ft_putchar(argv[1][3]);
	ft_putchar('\n');
	return(0);
}