#include <iostream>
#include <string>
using namespace std;

class test {
public:
  void printdata(int i) {
    std::cout << "Printing the Integer data: "<< i << '\n';
  }
  void printdata(double x) {
    std::cout << "Printing the float data: "<< x << '\n';
  }
  void printdata(char y) {
    std::cout << "Printing the characters data: "<< y << '\n';
  }
  // void printdata(char* f) {
  //   std::cout << "Printing from the pointers chars: "<< f << '\n';
  // }
  void printdata(string a) {
    std::cout << "Printing String: " << a << '\n';
  }
};
int main() {
  test t;

  t.printdata(10);

  t.printdata(10.5);

  t.printdata('A');

  t.printdata("Hello World From String!");
  return 0;
}
