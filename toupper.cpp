#include <iostream>
#include <string>
using namespace std;

int main()
  {
    string text;
    std::cout << "Enter Text: " << '\n';
    getline(cin, text);
    for(int i = 0; i < text.size(); i++)
      {
        if (char(text[i] >= 97 ) && char(text[i] < 123)) {
          std::cout << char(text[i] - 32);
        }
      }
  }
