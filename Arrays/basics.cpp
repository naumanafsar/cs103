#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int array[10];

  for(int i = 0; i < 10; i++) {
    array[i] = i + 10;
  }

cout << "Element" << setw( 13 ) << "Value" << endl;

  for(int j = 0; j < 10; j++) {
    cout << setw( 7 )<< j << setw( 13 ) << array[ j ] << endl;
  }

  return 0;
}
