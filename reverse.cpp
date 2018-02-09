#include <iostream>
using namespace std;

int reverse(int num)
{
  int new_num = 0;
  while(num > 0)
  {
          new_num = new_num*10 + (num % 10);
          num = num/10;
  }
  cout << new_num << endl;
}

int main()
{
  int num;
  cout<<"Please Enter a number: ";
  cin>>num;
  reverse(num);

}
