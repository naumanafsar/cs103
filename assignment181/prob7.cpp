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

    int LastLargestIndex(int arr[], int size) {
        int largest = arr[0];
        int index;
        for(int i = 0; i < size; i++) {
            if(arr[i] >= largest) {
                largest = arr[i];
                index = i;
            }
        }
        return index;
    }

int main() {

    int arr[10] = {1,2,3,10,5,10,11,8,11,0};
    int size = 10;
    cout <<"The index of the last largest element in the array is: " <<LastLargestIndex(arr,size) << endl;
    return 0;
}
