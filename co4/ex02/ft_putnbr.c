#include<unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr(147483648);
        return;
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
    }
    ft_putchar((nb % 10) + '0');
}
/*
int main(void)
{
    ft_putnbr(24);
    write(1, "\n", 1);
    ft_putnbr(23);
    write(1,"\n", 1);
    ft_putnbr(-373224);
    write(1,"\n", 1);
    ft_putnbr(24363);
    write(1, "\n", 1);
    ft_putnbr(-200);
}*/
