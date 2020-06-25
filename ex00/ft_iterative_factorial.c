#include <unistd.h>


int ft_iterative_factorial(int nb)
{
	int x = 1;

	if(nb>0)
	{
    	while(nb > 0 )
	    {
          x = x * nb;
	      nb --;
      	}
    	return x;
	}
	else
	{
		return 0;
	}

}




