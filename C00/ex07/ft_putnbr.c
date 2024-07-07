#include<unistd.h>

void	ft_putnbr(int nb)
{
	int	taile;

	taile = nb -1;
	write(1, &nb, taile);
}

int main(void)
{
    ft_putnbr(2000);
    return (0);
}
