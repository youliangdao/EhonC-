#include <stdio.h>

//int Sum(int a, int b, int c);
//int Sum(int a, int b);
int Sum(int a, int b, int c = 0);

int main(void){
  int x = Sum(1, 2);
  int y = Sum(1, 2, 3);
  printf("二つの和：%d　三つの和：%d\n", x, y);
}

/*
int Sum(int a, int b, int c)
{
  return a + b + c;
}

int Sum(int a, int b)
{
  return a + b;
}
*/
int Sum(int a, int b, int c)
{
  return a + b + c;
}


