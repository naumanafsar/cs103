#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<string> strings;

  strings.push_back("one");
  strings.push_back("two");
  strings.push_back("three");

  // strings[3] = "test";

  for(int i = 0; i < strings.size(); i++) {
    std::cout << strings[i] << '\n';
  }

  std::cout << strings[1] << '\n';

  std::cout << strings.size() << '\n';

  return 0;
}
