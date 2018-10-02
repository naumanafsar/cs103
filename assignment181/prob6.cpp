/*
#################################
#Name: Nauman Afsar
#RollNo: p17-6053
#Subject: Computer Programming
#Email: naumanafsar45@gmail.com
#################################
*/

#include <iostream>
using namespace std;

    float square(float base, float power) {
        int res = 1;
        for(int i = 0; i < power; i++) {
            res *= base;
        }
        return res;
    }

int main() {
    double alpha[50];
    for(int i = 0; i < 50; i++) {
        if(i < 25) {
            alpha[i] = square(i, 2);
        }
        else
            alpha[i] = square(i, 3);
    }
    for(int i = 0; i < 50; i++) {
        cout << alpha[i] << " ";
        if(i % 10 == 0 && i > 0) cout << endl;
    }
    return 0;
}
