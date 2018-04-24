#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
  ofstream out("input.txt");
  out << "My first file" << endl;
  out << "This is the second line" << endl;
  out << 2 << endl;
  out << 'A' << endl;
  out.close();

  fstream inFile;
  inFile.open("input.txt", ios::in);
  string line;
  // getline(inFile, line);
  // cout << line << endl;

  if(inFile.is_open()) {

    while(!inFile.eof()) {      //To read the entire file, eof suggests End of Line
      getline(inFile, line);

      // inFile >> line;

      cout  << line << endl;
    }

    cout << "File Opened Successfully!";
  }

  else cout << "Some Error Occured!";

  inFile.close();

  return 0;
}
