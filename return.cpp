#include <iostream>
using namespace std;

int Substraction(int num1, int num2) {
  int r;

  r = num1 - num2;
  return r;
}

int main() {
  int x = 5, y = 3, z;

  z = Substraction(7,2);

  std::cout << "The first result is: " << z << '\n';
  std::cout << "The second result is: " << Substraction(7,2) << '\n';
  std::cout << "The third result is: " << Substraction(x,y)<<  '\n';

  z = 4 + Substraction(x,y);
  std::cout << "The fourth result is: " << z << '\n';

  return 0;
}
