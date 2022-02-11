#include <stdio.h>
int main()
{ 
  int x=20,y=5;
  //code to swap 'x' and 'y'
  x = x + y; //x now becomes 25
  y = x - y; //y now becomes 20
  x = x - y; //x now becomes 15
  
  printf("After swapping : x=%d , y=%d", x , y);
  
  return 0;
}
