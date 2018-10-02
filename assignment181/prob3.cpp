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
#include <stdio.h>
using namespace std;

    int num_of_day(int day, int month, int year);
    bool isleap(int year);
    int validate_date(int day, char c1, int month, char c2, int year);
    int date(int month, int year);

int main() {
    int day, month, year;
    char c;

    cout << "Please Enter the date in MM-DD-YYYY format: ";
    scanf("%d %c %d %c %d", &month , &c, &day, &c, &year );
    if(validate_date(day,c,month,c,year)) {
    cout << "The Total Number of days is: " << num_of_day(month,day,year);
    }
    return 0;
}

    int num_of_day(int month, int day, int year) {
        int count = 0;
        if(month > 1) {
            for(int i = 1; i < month; i++) {
                count += date(i, year);
            } count += day;
        } else count += day;

        return count;
    }

    int validate_date(int day, char c1, int month, char c2, int year) {
        if ( c1 != '-' || c2 != '-') {
            cout << "The date must be in MM-DD-YYYY Format!" << endl;
            return 0;
        }
        else if ( day > 31 || month > 12 || day < 0 || month < 0) {
            cout << "Please enter a valid date!" << endl;
            return 0;
        }
        else if( (month == 1 , 3 , 5 , 7 , 8, 10, 12) && day > 31) {
            cout << "Plese enter a valid date!";
            return 0;
        }
        else if ( (month == 4, 6, 9, 11) && day > 30) {
            cout << "Please enter a valid date!";
            return 0;
        }
        else if (isleap(year) == true && month == 2 && day > 29) {
            cout << "Please enter a valid date!" << endl;
            return 0;
        }
        return 1;
    }

    bool isleap(int year) {
        if(year % 4 == 0 || year % 400 == 0 && year % 100 == 0) {
            return true;
        }
        else return false;
    }

    int date(int month, int year) {
        if(month == 1) {
            return 31;
        }
        if(isleap(year) == true && month == 2) {
            return 29;
        }
        if(month == 2) {
            return 28;
        }
        if(month == 3) {
            return 31;
        }
        if(month == 4) {
            return 30;
        }
        if(month == 5) {
            return 31;
        }
        if(month == 6) {
            return 30;
        }
        if(month == 7) {
            return 31;
        }
        if(month == 8) {
            return 31;
        }
        if(month == 9) {
            return 30;
        }
        if(month == 10) {
            return 31;
        }
        if(month == 11) {
            return 30;
        }
        if(month == 12) {
            return 31;
        } return 0;
    }
