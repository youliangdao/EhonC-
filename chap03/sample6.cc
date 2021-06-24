#include <iostream>

int main()
{
  char name[100];
  std::cout << "名前を入力してください\n";
  std::cin >> name;
  std::cout << "名前は、" << name << "です。" << std::endl;
}