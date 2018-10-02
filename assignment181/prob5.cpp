/*
#################################
#Name: Nauman Afsar
#RollNo: p17-6053
#Subject: Computer Programming
#Email: naumanafsar45@gmail.com
#################################
*/
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

float calInflation(float cur, float prev, float prev_ago);
void outResult(float res);

    int getData() {

        float cur, prev, prev_ago;

        cout << "Enter Price of Current Year: ";
        cin >> cur;
        cout << "Enter Price of the item previous year: ";
        cin >> prev;
        cout << "Enter Price of the item before that previous year: ";
        cin >> prev_ago;

        calInflation(cur,prev,prev_ago);


    }
    float calInflation(float cur, float prev, float prev_ago) {
        float cal = (prev - cur) / prev;

        float cal2 = (prev_ago - prev) / prev_ago;

        float res = (cal + cal2) / 2;

        outResult(res);
    }
    void outResult(float result) {
        if((result * 100) > 0) cout << "The inflation rate decreasing at: " << setprecision(4) << abs(result * 100) << "%";

        else cout << "The Inflation rate is decreasing at: " << setprecision(4) << abs(result * 100) << "%";
    }
int main() {


    getData();


    return 0;
}
