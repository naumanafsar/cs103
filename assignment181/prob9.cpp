/*
#################################
#Name: Nauman Afsar
#RollNo: p17-6053
#Subject: Computer Programming
#Email: naumanafsar45@gmail.com
#################################
*/
#include <iostream>
#include <iomanip>
using namespace std;

    float avgHigh(float a[12][2]) {
        float high = 0;
        for(int i = 0; i < 12; i++) {
            high += a[i][0];
        }
        return high / 12;
    }

    float avgLow(float a[12][2]) {
        float low = 0;
            for(int i = 0; i < 12; i++) {
                low += a[0][i];
            }
        return low / 12;
    }

    int indexHighTemp(float a[12][2]) {
        int largest = a[0][0];
        int index = 0;
        for(int i = 0; i < 12; i++) {
            if(a[i][0] >= largest) {
                largest = a[i][0];
                index = i;
            }
        }
        return index;
    }

    int indexLowTemp(float a[12][2]) {
        int lowest = a[0][0];
        int index = 0;
        for(int i = 0; i < 12; i++) {
            if(a[i][1] <= lowest) {
                lowest = a[i][1];
                index = i;
            }
        }
        return index;
    }
    float getData(float data[12][2]) {
    float a[12][2] = {{7,4}, {10, 2}, {15, 5}, {22, 8}, {32, 24}, {45.1, 35}, {42.4, 32}, {33, 27}, {32, 25}, {29, 22}, {18, 9}, {5,4}};
    // float a[12][2];                 // If you want to give default values then uncomment line 53 and comment from line 54 to 59!
    // for(int i = 0; i < 12; i++) {
    //     for(int j = 0; j < 2; j++) {
    //         cin >> a[i][j];
    //     }
    // }
    cout << "Average High is: " << setprecision(4) << avgHigh(a) << endl;
    cout << "Average Low is: " << setprecision(4) << avgLow(a) << endl;
    cout << "Index High Temperature is: "<< indexHighTemp(a) << endl;
    cout << "Index of Low Temperature is: " << indexLowTemp(a) << endl;
    return 0;
    }


int main() {
    float data[12][2];
    getData(data);
    return 0;
}
