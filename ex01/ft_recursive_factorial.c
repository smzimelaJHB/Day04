#include <unistd.h>


int ft_recursive_factorial(int nb)
{
	int x = 1;
	while(nb > 0 )
	{
       x = x * nb;
	   nb --;
	}
	return x;

}
