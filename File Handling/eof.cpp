#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {
	string str;
  char ch;
  int x , y;
  float fl;
	ifstream in;
	in.open("/home/mr-robot/Desktop/input.txt", ios::in);
	while(!in.eof()) {
    // getline(in, str);
    // in >> str;
    in >> x >> y >> str >> ch >> fl;
    cout << x <<  " " << y << endl <<  str << endl << ch << endl << fl << endl;
	}

	cout << endl;
	in.close();

}
