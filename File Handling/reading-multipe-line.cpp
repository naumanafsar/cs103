#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {
	string str;
	ifstream in;
	in.open("input.txt");   //in.get(chr) this will get char by char
	while( in >> str) {
		cout << str <<" ";
	}
	cout << endl;
	in.close();
}
