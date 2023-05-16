#include <stdio.h>
#include <stdlib.h>

int main()
{
  int length = 1;
  int num = 38;
  
  printf("%d ", num);
  
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
    printf("%d ", num);
    length++;
  }
  
  printf("Sequence length: %d ", length);
  
  return 0;
}
