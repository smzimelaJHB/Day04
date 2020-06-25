#include <unistd.h>


int ft_iterative_power(int nb, int power)
{

  if(nb==0||power<0)
  {
    return 0;
  }
  if(power==0)
  {
    return 1;
  }
  else
  {
  int j = 1;
  while(power > 0)
  {
    j = j * nb;
    power--;
  }
  return j;
  }
}

