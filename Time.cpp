#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

class Time {
private:
  int hr, min, sec;
  char c;

public:
  Time() {
    hr = 0;
    min = 0;
    sec = 0;
  }

  void setTime() {
    cout<<"Enter Time in HH:MM:SS Format: " << endl;

    scanf("%d %c %d %c %d", &hr, &c , &min , &c , &sec);

    checkTime(hr, min, sec);

    checkTime(hr, min);

    checkTime(hr);

  }

  void showTime() {
    if (hr > 12) {
      std::cout << "The Time is: " << hr - 12 << c << min << c << sec << " PM" <<endl;
    }

    else if( sec < 10 || hr < 10 || min < 10) {
      std::cout << "The Time is: " << "0" << hr << c << "0" << min << c << "0" << sec << "AM" << '\n';
    }
    else std::cout << "The Time is: " << hr << c << min << c << sec << " AM" <<endl;

  }
  void checkTime(int hour) {
    if (hour < 0 || hour > 24) std::cout << "Hours Can't be greater than 24!" << '\n';
  }

  void checkTime(int h, int m) {
    checkTime(h);
    if( m > 59) {
      min = m - 59;
      hr += 1;
    }
  }

  void checkTime(int h, int m, int s) {
    checkTime(h,m);
    if (s > 59) {
      min += 1;
      sec = s - 59;
    }
    else sec = s;
  }
};

int main() {
  Time t;
  t.setTime();
  t.showTime();
  return 0;
}
