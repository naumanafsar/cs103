#include <iostream>
#include <stdio.h>
using namespace std;

class Date {
private:
  int day, month, year;
  char c;
public:
  Date() {
    day = 0;
    month = 0;
    year = 0;
  }

  int Length(int num) {
    static int count = 0;
    int n = num/10;
    if (n == 0) {
      int count2 = count;
        count2++;
        count = 0;
        return count2;
      }

    else {
      count++;
        return Length(n);
      }
  }

  void  showDate() {
    std::cout << "The Date is: " << day << c << month << c << year << '\n';
  }

  void setDate() {
    std::cout << "Please Enter the date in DD-MM-YYYY format!" << '\n';
    scanf("%d %c %d %c %d", &day , &c , &month, &c , &year );

    checkDate(day, month, year);
    checkDate(day, month);
    checkDate(day);
  }

  void checkDate(int d) {
    if ( d > 31 || d < 0) {
      std::cout << "Day can't be greater than 31! \n (1-31) \n";
        std::cin >> day;
        checkDate(day);
    }
    else return;
  }

  void checkDate(int d, int m) {
    if(m > 12 || m < 0) {
      std::cout << "Month can't be greater than 12! \n (1-12) \n ";
      std::cin >> month;
      checkDate(d, month);
    }
    else return;
  }

  void checkDate(int d, int m, int y) {
    int l,temp = y;
		 	l = Length(temp);
    if( l != 4) {
      std::cout << "Year can't be that! \n e.g 2018! \n";
      std::cin >> year;
      checkDate(d, m, year);
    }
    else return;
  }
};

int main() {
  Date d;
  d.setDate();
  d.showDate();

}
