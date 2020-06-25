#include <unistd.h>


int ft_recursive_factorial(int nb)
{ 

	if(nb<=1)
	{
		return 1;
	}
	else
	{	 
     int t = nb*ft_recursive_factorial(nb-1);
     return t;
	}
}



