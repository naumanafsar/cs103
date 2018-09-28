#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;



	int power(int base, int exp) {
		int res = 1;
		for(int i = 0; i < exp; i++) {
			res *= base;
		}
		return res;
	}
	
	string Max(string s1, string s2, string s3) {
		for(int i = 0; i < 3; i++) {
			if(s1.length() > s2.length() && s1.length() > s3.length()) {
				return s2;
			}
			else if(s2.length() > s1.length() && s2.length() > s3.length() )
			return s2;
			
			else return s3;
		}
	}
	
	int fact(int num) {
		
		int res = 1;
		int i = 1;
		while(num > 1) {
			res *= num;
			num = num - 1;
		}
		return res;
	}
	
	void Range(int start, int end){
		for(int i = start; i <= end; i++) {
			cout << i << endl;
		}
	}
	
	int numLength(int num) {
		int res = 1;
		if (num > 0) {
    	for (res = 0; num > 0; res++) {
        	num = num / 10;
    		}
		}
		return res;
	}
	
	char maxChar(string str){
		int len = str.length();
		char max = str[0];
		for(int i = 0; i < len; i++) {
			if(char(str[i]) > max) {
				max = str[i];
			}
		}
		return max;
	}
void print(int a[]);
void ReversePrint(int a[]);	
	void input(int a[]){
		for(int i = 0; i < 5; i++) {
			cout << "Enter the value in array at index " << i << endl;
			cin >> a[i];
		}
		print(a);
	}
	
	void print(int a[]) {
		for(int i = 0; i < 5; i++) {
			cout << "The value at Index " << i << " = " << a[i] << endl;
		}
		ReversePrint(a);
	}
	int swap(int a, int b){
		int temp;
		temp = a;
		a = b;
		b = temp;
		return a,b;
	}
	void ReversePrint(int a[]) {
		int size = 5;
		while (size > 0){
			cout <<a[size];
			size--;
		}
			
		}
	
int main() {
//	cout << "\""<< Max("Hey", "Hello", "Hello World") << "\"" << " is Maximum!" << endl;
//	cout << power(5,2) << endl;
//	cout << fact(3) << endl;
//	Range(1,10);
//	cout << numLength(1000000) << endl;
//	cout << maxChar("Hamza") << endl;
	int a[5];
	input(a);
	
	return 0;
}
