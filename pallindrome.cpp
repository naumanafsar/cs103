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
  if(new_num == num)
  {
    cout<<"The number is Pallindrome"<<endl;
  }
  else
    {
      cout<<"The number is not a Pallindrome"<<endl;
    }
}

int main()
{
  int number;
  cout<<"Please Enter the number: ";
  cin>>number;
  reverse(number);
}
