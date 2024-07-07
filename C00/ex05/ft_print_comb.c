#include<unistd.h>

void	combo(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
        if (!(a == '7' && b == '8' && c == '9'))
        {
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
	{
		 k = j + 1;
		while (k <= '9')
		{
			combo(i, j, k);
			k++;
		}
		j++;
	   }
	    i++;
	}
	 write(1, "\n", 2);
}

/*
int main(void)
{
    ft_print_comb();
    return (0);
}*/
