#include <iostream>
using namespace std;

class Distance {
private:
  int feet, inch;
public:
  Distance() {
    feet = 0;
    inch = 0;
  }

  void setData() {
    std::cout << "Enter Feets: ";
    feet = 12;

    std::cout << "Enter Inches: ";
    inch = 6;
  }

  void showData() {
    std::cout << "Inches are " << inch << " and feets are " << feet << '\n';

    std::cout << "/* message */" << '\n';
  }

  bool operator >(Distance d) {
    if(feet > d.feet) {
      return true;
    }
    if(inch > d.inch) {
      return true;
    }
    else return false;
  }
};

int main() {
  Distance d , d1;

  d.setData();

  d.showData();

  if(d > d1) std::cout << "D is greater than D1" << '\n';

  else std::cout << "Less than" << '\n';

  return 0;
}
