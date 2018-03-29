#include <iostream>
// #include <conio.h>
using namespace std;
class counter {
		private:
			int count;
		public:
			counter() {
        count = 0;
      }
			~counter() {

      }
			int get_count() {
        return count;
      }

      void operator -- () {
        count--;
      }

      void operator > () {

      }
	};
int main()
 {   	counter c1, c2;            // Defining two objects of Human class
	cout<<"\n c1 = "<< c1.get_count();
	cout<<"\n c2 = "<< c2.get_count();
	--c1;
	--c2;
	--c2;
	cout<<"\n c1 = "<<c1.get_count();
	cout<<"\n c2 = "<<c2.get_count();
 }
