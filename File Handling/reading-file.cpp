#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  string inFileName = "test.txt";
  fstream inFile;

  inFile.open(inFileName.c_str(), ios::in);

  if(inFile.is_open()) {
    string line;

    while(!inFile.eof()) {      //To read the entire file, eof suggests End of Line
      getline(inFile, line);
      // inFile >> line;
      cout  << line << endl;
    }
    inFile.close();
  }

  else {
    cout << "Could not open the file ";
  }
}
