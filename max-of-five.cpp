/*
  Author: Nauman Afsar
  Description: CS17-B CPLAB Task
  RollNo: p17-6053
  Email: p176053@nu.edu.pk
  Github: www.github.com/naumanafsar
*/
#include <iostream>
using namespace std;



/* ~~~~~ Declaring Function ~~~~~~ */
int maximum(int num1,int num2,int num3,int num4,int num5)
  {
    if(num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5)
      {
        cout<<num1<<" is the maximum number";
      };
    if(num2 > num1 && num2 > num3 && num2 > num4 && num1 > num5)
      {
        cout<<num2<<" is the maximum number";
      };
    if(num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5)
      {
        cout<<num3<<" is the maximum number";
      };
    if(num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5)
      {
        cout<<num5<<" is the maximum number";
      };
    if(num5 > num1 && num5 > num2 && num5 > num3 && num5 > num4)
      {
        cout<<num5<<" is the maximum number";
      };
  }

int main()
{
  int num1,num2,num3,num4,num5; //Declaring variables
  cout<<"Please Enter the Num1: ";
  cin>>num1;
  cout<<"Please Enter the Num2: ";
  cin>>num2;
  cout<<"Please Enter the Num3: ";
  cin>>num3;
  cout<<"Please Enter the Num4: ";
  cin>>num4;
  cout<<"Please Enter the Num5: ";
  cin>>num5;
  maximum(num1,num2,num3,num4,num5);

}
