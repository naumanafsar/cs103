#include <iostream>
#include <string>
using namespace std;

class MyFather {
protected:
  string name, eyeColor, hairColor;
public:
  MyFather() {
  }

  void setValues(string nm, string eye, string hair) {
    name = nm;
    eyeColor = eye;
    hairColor = hair;
  }
};


class MySelf: public MyFather {
protected:
  string education;
  int age;

public:
  void setEdu(string edu) {
    education = edu;
  }

  void setAge(int ag) {
    age = ag;
  }

  void printValues() {
    cout << "The education is: " << education << " and the age is: " << age << endl << "Name: " << name << " Eyes Color: " << eyeColor << " Hair Color: " << hairColor << endl;;
  }

};

int main() {
  MySelf m1;

  m1.setValues("Nauman", "Brown", "Black");
  m1.setAge(19);
  m1.setEdu("BSCS");
  m1.printValues();

  // m1.printMyself();

  return 0;
}
