#include <iostream>
using namespace std;

class Base {
public:
  void disp(void) {
    cout << "Base class Disp! " << endl;
  }

  virtual void show(void) {
    cout << "Base class Show! " << endl;
  }
};

class Derived: public Base {
public:
  void disp(void) {
    cout << "Derived class Disp!" << endl;
  }

  virtual void show(void) {
    cout << "Derived class Show!" << endl;
  }
};

int main() {
  Base *p;
  Base objb;
  Derived objd;

  p = &objb;
  p->disp();
  p->show();

  p = &objd;
  p->disp();
  p->show();

  return 0;
}
