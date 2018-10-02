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

    float func(float x, float y, float z) {
        int base = x * y;
        return square(base, z);
    }

int main() {

    cout << func(2,2,2);

    return 0;
}
