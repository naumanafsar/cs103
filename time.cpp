#include <iostream>
using namespace std;

class Time {
private:
  int hr, min, sec;
public:
  Time() {
    hr = 0;
    min = 0;
    sec = 0;

    std::cout << "Calling Default Const!" << '\n';
  }

  Time(int h, int m, int s){
    hr = h;
    min = m;
    sec = s;

    std::cerr << "Calling Par" << '\n';
  }

  void Print() {
    std::cout << "The Time is: " << hr << ":"  << min << ":" << sec << '\n';
  }

};

int main() {
  Time t;
  Time t1(12,32,12);
  t.Print();

  return 0;
}
