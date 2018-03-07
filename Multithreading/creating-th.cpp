#include <iostream>
#include <thread>
using namespace std;

void test(int val) {
  std::cout << "Test function called..." << '\n';
  std::cout << "The Value is = "<<val << '\n';
}

int main() {

  int value = 100;
  thread t1{test,value};

  t1.join();

  return 0;
}
