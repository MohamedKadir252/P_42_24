#include <unistd.h>

void	print_comb2(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void) {
	int	i;
	int	j;

	i = 0;
	 while (i <= 99)
	{
		j = i + 1;
		 while (j <= 99)
		{
			print_comb2((i / 10 ) + '0');
			print_comb2((i % 10 ) + '0');
			write(1, " ", 1);
			print_comb2((j % 10 ) + '0');
			print_comb2((j % 10 ) + '0');
			j++;
			if (i != 98)
			{
			    write(1, ", ", 2);
			}
		}
		i++;
	}
	write(1, "\n", 2);
}

int main(void) {
  ft_print_comb2();
  return (0);
}
