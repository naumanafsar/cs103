#include <iostream>
using namespace std;

class Distance {
private:
  int feet, inches;
public:
  Distance() {
    feet = 0;
    inches = 0;
  }
  Distance(int f, int i) {
    feet = f;
    inches = i;
  }
  void get() {
    std::cout << "Please Enter Inches: " << '\n';
    std::cin >> inches;
    std::cout << "Please Enter Feets: " << '\n';
    std::cin >> feet;
  }
  void show() {
    std::cout << "The total length is "<< feet << "."<<inches << '\n';
  }
  Distance operator +(Distance d1) {
    Distance d;
    d.feet = feet + d1.feet;
    return d;
  }
};

int main() {
  Distance d1, d3;
  d1.get();
  Distance d2(5, 11);
  d3 = d2 + d1;
  d2.show();
}
/* scanf example */
// #include <stdio.h>
//
// int main ()
// {
//   char str [80];
//   int i;
//
//   printf ("Enter your family name: ");
//   scanf ("%79s",str);
//   printf ("Enter your age: ");
//   scanf ("%d",&i);
//   printf ("Mr. %s , %d years old.\n",str,i);
//   printf ("Enter a hexadecimal number: ");
//   scanf ("%x",&i);
//   printf ("You have entered %#x (%d).\n",i,i);
//
//   return 0;
// }
