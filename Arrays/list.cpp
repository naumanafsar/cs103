#include <iostream>
#include <string>
using namespace std;


class List {
	private:
		const int maxSize = 10;
		int size;
		int *p;
	public:
		List() {
			size = 0;
			p = new int[maxSize];
		}
		
		void insert(int index, int value) {
			if(index > maxSize || index < 0) {
				cout << "Error: Index out of bound!";
			}
			else if(index > size || index == size) {	
				p[size] = value;
				size ++;
			}
			else if(index < size) {
				for(int i = size; i > index; i--) {
					p[i+1] = i;
				}
				p[index] = value;	
			}
				
		}
		
		void deleteIndex(int index) {
			if(index > maxSize || index < 0) {
				cout << "Error: Index out of bound!";
			}
			else if(index < size) {
				for(int i = size; i < index; i++) {
					p[i-1] = i;
				}
			}
			
		}
//		
//		bool isEmpty() {
//			
//		}
		
		void showSize() {
			for(int i = 0; i < size; i++) {
				cout << p[i] << " ";
			}
		}
		
		~List() {
			delete [] p;
		}
};



int main() {
	List obj;
	obj.insert(0,0);
	obj.insert(1,1);
	obj.insert(2,5);
	obj.insert(3,3);
	obj.insert(1,4);
	obj.showSize();
	return 0;
}
