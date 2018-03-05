/*#########################
#Author: Nauman Afsar
#Name: Abstract Class.cpp
#Description: Class Practice
#Creation Date: 5/Mar/2018
##########################*/

#include <iostream>
using namespace std;

class Animal {
  public:
    virtual void speak() = 0; //Pure Virtual function, (Abstract class)
    virtual void run() = 0;
};

class Dog: public Animal {
  public:
    virtual void speak() {
      std::cout << "Booo!" << '\n';
    };
};

class Labrador: public Dog {
public:
  Labrador() {      //Constructor
    std::cout << "Calling the constructor..." << '\n';
  }
  virtual void run() {
    std::cout << "Labrador running..." << '\n';
  };
};

void test(Animal &a) {
  a.run();
}

int main() {
  Labrador lab;
  lab.run();
  lab.speak();
  // Animal animals[5]; We can't run the constructor of Animal so we can't do this
  Animal *animals[5]; //But we can use a pointer her
  animals[0] = &lab;
  animals[0]-> speak();

  test(lab);
  //Animal animal; We can't do this because Animal has a pure virtual function
  //Labrador labs[5];
  //Dog dog;        //Create Instance
  //dog.speak();



  return 0;
}
