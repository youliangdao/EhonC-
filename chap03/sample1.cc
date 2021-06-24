#include <stdio.h>

double GetCircleArea(int radius = 3, double pi = 3.14);

int main(void)
{
  double area;
  area = GetCircleArea();
  printf("面積は%fです\n", area);
  return 0;
}

double GetCircleArea(int radius, double pi)
{
  return radius * radius * pi;
}