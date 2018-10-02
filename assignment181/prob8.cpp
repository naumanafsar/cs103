/*
#################################
#Name: Nauman Afsar
#RollNo: p17-6053
#Subject: Computer Programming
#Email: naumanafsar45@gmail.com
#################################
*/

#include <iostream>
#include <string>
using namespace std;

    string uppercase(string str, int size) {
        char upper[size];
        for(int i = 0; i < size; i++) {
            if( char(str[i]) > 97 && char(str[i]) < 122) {
                upper[i] = char(str[i] - 32);
                } else {
                upper[i] = str[i];
            }
        }
            return string(upper);
    }
int main() {
    string str;
    cout << "Please Enter a string line: ";
    getline(cin, str);
    int size = str.length();
    cout << uppercase(str , size);
    return 0;
}
