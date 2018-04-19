#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  string inFileName = "data.txt";
  char ch;
  string line;
  fstream inFile;

  int count = 0;
  int upper = 0;
  int lower = 0;
  int lines = 0;

  inFile.open(inFileName.c_str(), ios::in);

  if(inFile.is_open()) {
    while(!inFile.eof()) {
      inFile.get(ch);

      if(ch >= char(65) && ch <= char(90)) {
        upper += 1;
      }

      if(ch >= char(97) && ch <= char(122)) {
        lower += 1;
      }

      count += 1;

      }
    }

    else cout << "Couldn't Open the file!";
    inFile.close();

    inFile.open(inFileName.c_str(), ios::in);
      while (getline(inFile, line)) {
        lines += 1;
    }

  inFile.close();

  fstream outFile;
  string outFileName = "copy.txt";
  string data = " ";

  inFile.open(inFileName.c_str(), ios::in);
  outFile.open(outFileName.c_str(), ios::out);
  for(int i = 0; inFile.eof() == false; i++) {
    inFile.get(ch);
    outFile << ch;

  }

  inFile.close();
  outFile.close();

  cout <<"The total number of character is: " << count << endl;
  cout << "The total upper characters are: " << upper << endl;
  cout << "The total lower character are: " << lower << endl;
  cout << "The total number of lines are: " << lines << endl;

    return 0;
  }
