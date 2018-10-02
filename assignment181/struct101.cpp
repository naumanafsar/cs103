#include <iostream>
#include <string>
using namespace std;

    struct Student {
        string firstName;
        string lastName;
        string rollNo;
    };

int main(){

    // Student s1;
    Student c[5];
    for(int i = 0; i < 3; i++) {
        cin >> c[i].firstName;
        cin >> c[i].lastName;
        cin >> c[i].rollNo;
    }

    for(int i = 0; i < 3; i++) {
        cout << c[i].firstName << endl;
        cout << c[i].lastName << endl;
        cout << c[i].rollNo << endl;
    }


    return 0;
}
