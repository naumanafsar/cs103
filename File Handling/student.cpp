#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  fstream inFile;
  string inFileName = "student.txt";
  string line;

  inFile.open(inFileName.c_str(), ios::in);
  getline(inFile, line);
  cout <<"This is from Getline: " <<  line << endl;

  while(!inFile.eof()) {
    getline(inFile, line);

    cout << line << endl;
  }

  inFile.close();

  cout << char(122);





  return 0;
}
