#include <iostream>
#include <string>
using namespace std;

class Vehicle {
private:
  int num_of_tires, size, no_of_seats;
public:
  Vehicle() {
    num_of_tires = 0;
    size = 0;
    no_of_seats = 0;
  }

  int setValue(int tires, int siz, int seats) {
    num_of_tires = tires;
    size = siz;
    no_of_seats = seats;
  }

  int getValue() {
    cout << "Number of Tires: " << endl;
    cin >> num_of_tires;
    cout << "Size: " << endl;
    cin >> size;
    cout << "Number of seats: " << endl;
    cin >> no_of_seats;
  }

  void printValue() {
    cout << "The number of tires is " << num_of_tires << " and size is "<< size << " and number of seats are " << no_of_seats << endl;
  }
};

class car: public Vehicle {
private:
  string color;
public:
  car() {
    color = "White";
  }

  void printColor() {
    cout << "The color of the car is: " << color;
  }
};

class vitz: public car {
protected:
  int model, plateNumber;
public:
  vitz(int modl = 0, int pltNumber = 0) {
    model = modl;
    plateNumber = pltNumber;
  }

  void setModel(int x) {
    model = x;
  }

  int getModel() {
    return model;
  }

  void printModel() {
    cout << "The model is: " << model << endl;;
  }

  void setPlateNumber(int y) {
    plateNumber = y;
  }

  void printPlateNumber() {
    cout << "The plate number is: " << plateNumber << endl;
  }
};

int main() {

  vitz v1;
  v1.setValue(4,8,4);
  v1.printValue();
  v1.getValue();
  v1.printValue();

  v1.setModel(2010);
  v1.printModel();

  v1.setPlateNumber(2310);
  v1.printPlateNumber();
  return 0;
}
