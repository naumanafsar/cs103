#include <iostream>
using namespace std;

int main() {
  int row, col;
  cin >> row;
  cin >> col;
  int **a;
  a = new int* [row];
  for(int i = 0;i<row ;i++){
   a[i] = new int[col];
  }
  //Fill
  for(int j = 0; j < row; j++) {
		for(int i = 0; i < row; i++) {
			a[i][j] = i;
    }
  }
  //Print
  for(int i = 0; i < row; ++i) {
    for(int j = 0; j < row; ++j) {
      cout << a[i][j];
    }
  }
  //delete

  for(int i = 0; i < row; ++i) {
    delete [] a[i];
    delete [] a;
  }

  return 0;
}


// int ***arr = new int**[X];
// for (i = 0; i < z_size; ++i) {
//   arr[i] = new int*[Y];
//   for (j = 0; j < WIDTH; ++j)
//     arr[i][j] = new int[Z];
// }
