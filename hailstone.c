#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int length = 1;
  int num = 38;
  
  while(num != 1)
  {
    if(num % 2)
    {
      num = (num * 3) + 1;
    }
    else
    {
      num = num/2;
    }
    printf(num);
    length++
  }
  
  printf(length);
  
  return(0);
}
