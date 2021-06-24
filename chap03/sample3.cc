#include <iostream>

int main(void)
{
  double pi = 3.14;
  std::cout << "円周率は" << pi << std::endl;
  std::cout.width(4);
  std::cout << 25 << std::endl;
  std::cout.fill('0');
  std::cout.width(4);
  std::cout << 25 << std::endl;

  std::cout.width(7);
  std::cout.precision(3);
  std::cout << 155.32 << std::endl;

  char name[] = "hello";
  std::cout.width(6);
  std::cout << name << std::endl;
  return 0;
}
