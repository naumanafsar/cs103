/*
#Name: Nauman Afsar
#RollNo: p17-6053
#Subject: Computer Programming
#Email: naumanafsar45@gmail.com
*/

#include <iostream>
using namespace std;

    long func(long num) {
        int odd = 0;
        int even = 0;
        int zeros = 0;
        int x;
        while(num > 0) {
            x = num % 10;
            if(x == 0) {
                zeros += 1;
            }
            else if(x % 2 == 0) {
                even += 1;
            }
            else if(x % 2 != 0) {
                odd += 1;
            }
            num = num / 10;
        }

        cout << "The Number of Even Digits: " << even << endl;
        cout << "The Number of Odd Digits: " << odd << endl;
        cout << "The number of Zeroes: " << zeros << endl;
    }

int main() {
    long num;
    cin >> num;
    func(num);

    return 0;
}
