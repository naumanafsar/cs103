#include <iostream>
using namespace std;


void mightGoWrong() {
  bool error = true;

  if(error) {
    throw "Something Went Wrong!";
  }
}

int main() {
  try {
    mightGoWrong();
  }

  catch(int e) {
    std::cout << "Erro Code: " << e << '\n';
  }

  catch(char const *e) {
    std::cout << "Error Message: " << e << '\n';
  }


  return 0;
}
