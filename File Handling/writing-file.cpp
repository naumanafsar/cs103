#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  // ofstream outFile;

  fstream outFile;
  // string outputFileName = "test.txt";

  outFile.open("test.txt", ios::out);

  if(outFile.is_open()) {

    for(int i = 0; i < 10; i++) {
      outFile << i << endl;
    }
    // outFile << "Hello World!" << endl;
    // outFile << 123 << endl;
    outFile.close();
  }

  else {
    std::cout << "Could not create ";
  }

  return 0;
}
