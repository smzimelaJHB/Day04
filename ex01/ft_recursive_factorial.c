#include <unistd.h>


int ft_recursive_factorial(int nb)
{ 
	
	if(nb>1)
	{	 
     int t = nb*ft_recursive_factorial(nb-1);
     return t;
	}
	if(nb==1)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}



