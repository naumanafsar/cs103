/*
Returns 1 for prime
0 otherwise
*/
#include<iostream>
using namespace std;
int is_prime(int num)
  {
    int i;
    int prime = 0;
    int is_Prime = 1;
    for(i = 2; i <= num / 2; i++)
      {
        if(num % i == 0)
          {
            is_Prime = 0;
              break;
          }
      }
    if (is_Prime == 1)
      prime = 1;
    else
      prime = 0;
  return prime;
  }

int main()
  {
    int num;
    cout<<"Enter a Positive Number: "<<endl;
    cin>>num;
    cout << is_prime(x) << endl;
  return 0;
  }
