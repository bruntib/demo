#include <iostream>

void printNumbers()
{
  for (int i = 0; i < 10; ++i)
    std::cout << i << std::endl;
}

void sayHello()
{
  std::cout << "hello world" << std::endl;
}

int main()
{
  sayHello();
  printNumbers();
}
