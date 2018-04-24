//Pre defined functions!
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double num, sqroot;

  std::cout << "Enter a num: " << '\n';
  std::cin >> num;

  sqroot = sqrt(num);

  std::cout << "The square root of the number is: " << sqroot <<"." << '\n';

  return 0;
}
