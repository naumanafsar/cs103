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
    int wovel(string str, int &a, int &e, int &i, int &o, int &u) {
        int count = 0;
        char low[5] = {'a' , 'e', 'i' , 'o', 'u'};

        for(int x = 0; x < str.length(); x++) {
            for(int j = 0; j < 5; j++) {
                if(str[x] == low[j]) {
                    count += 1;
                }
            }
            if(str[x] == 'a') {
                a++;
            }
            else if(str[x] == 'e') {
                e++;
            }
            else if(str[x] == 'i') {
                i += 1;
            }
            else if(str[x] == 'o') {
                o++;
            }
            else if(str[x] == 'u') {
                u++;
            }
        }

        return count;
    }

int main() {
    string str;
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    cout << "Please enter a sting line: ";
    getline(cin, str);
    cout << "The total number of lower case wovels is: " << wovel(str,a,e,i,o,u) << endl;
    cout << "'a' appeared " << a << " times." << endl;
    cout << "'e' appeared " << e << " times." << endl;
    cout << "'i' appeared " << i << " times." << endl;
    cout << "'o' appeared " << o << " times." << endl;
    cout << "'u' appeared " << u << " times." << endl;
    return 0;
}
