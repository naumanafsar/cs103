#include <iostream>
using namespace std;

int main() {

  double var1, var2;

    std::cout << "Enter first number:" << '\n';
    std::cin >> var1;
    std::cout << "Enter second number:" << '\n';
    std::cin >> var2;

     std::cout << "What do you want to do with it?" << '\n';
     std::cout << "+ -Add numbers" << '\n';
     std::cout << "- -Substract numbers" << '\n';
     std::cout << "* -Multiply numbers" << '\n';
     std::cout << "/ -Divide numbers" << '\n';

     char Decision;
     std::cin >> Decision;

     switch (Decision) {
        case '+':
          std::cout <<var1<<" + "<<var2<<" = "<<var1 + var2 << '\n';

        case '-':
          std::cout <<var1<<" - "<<var2<<" = "<<var1 - var2 << '\n';

        case '*':
          std::cout <<var1<<" * "<<var2<<" = "<<var1 * var2 << '\n';

        case '/':
          if(var2 != 0)
            std::cout <<var1<<" / "<<var2<<" = "<<var1 / var2 << '\n';
          else
            std::cout << "Can't be divided by 0!" << '\n';
     }
     
   return 0;
}
