#include <iostream>
#include <string>
using namespace std;

class Vehicle {
	protected:
		int no_of_tires;
		int no_of_seats;
	public:
		Vehicle() {
			no_of_tires = 0;
			no_of_seats = 0;
		}
		
		Vehicle(int tires, int seats) {
			no_of_tires = tires;
			no_of_seats = seats;
		}
		
		void set_tires(int tires) {
			no_of_tires = tires;
		}
		void set_seats(int seats) {
			no_of_seats = seats;
		}
		
		int get_tires() {
			return no_of_tires;
		}
		
		int get_seats() {
			return no_of_seats;
		}
		
		void printveh() {
			cout << "Number of Seats: " << get_seats() << endl << "Number of Tires: " << get_tires() << endl;
		}
		
};

class car:public Vehicle {
	protected: 
		string color;
	public:
		car() {
			color = "Blue";
		}
		car(int t, int s, string c):Vehicle(t,s) {
			color = c;
		}
		
		void set_colors(string cl) {
			color = cl;
		}
		
		string get_colors() {
			return color;
		}
		
		void printcar() {
			cout << "The color of the vehicle is: " << get_colors() << endl;
			printveh();
		}
};

class vitz:public car{
	protected:
	int model;
	int plate_number;
	
	public:
	vitz() {
		model = 0;
		plate_number = 0;
	}
	
	vitz(int t, int s, string c, int mod, int p_num):car(t,s,c) {
		model = mod;
		plate_number = p_num;
	}
	void set_mod(int mod) {
		model = mod;
	}
	void set_pnum(int pnum) {
		plate_number = pnum;
	}
	int get_mod(){
		return model;
	}
	int get_pnum() {
		return plate_number;
	}
	
	void printvit() {
		cout << "The model number is: " << get_mod() << endl << "The Plate number is: " << get_pnum() << endl;
		printcar();
	}
	
};

int main() {
	vitz obj(4,4,"Red",33242,145242);
	obj.printvit();
//	obj.printveh();
	
return 0;
}
