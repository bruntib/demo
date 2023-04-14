#include <iostream>

void print_hello()
{
  std::cout << "hello world" << std::endl;
}

int main()
{
  print_hello();
  for (int i = 1; i <= 20; ++i) 
  {
	  std::cout << i << std::endl;
  }
}
