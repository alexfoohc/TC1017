#include <iostream>
using namespace std;
int masterAguayo(int num1, int num2, int gcd){
  while (num1!=num2){
    if (num1==0) {
    return num2;
    }
    else if (num2==0) {
     return num1;
    }
    else if (num1>num2){
      gcd=num1%num2;
      num1=num2;
      num2=gcd;
    }
    else if (num1<num2){
      gcd=num2%num1;
      num2=num1;
      num1=gcd;
    }
  }
    return num2;
  }
int main ()
{
  int num1, num2, gcd;
  cout<<"Type an integer"<<endl;
  cin>>num1;
  cout<<"Type another integer"<<endl;
  cin>>num2;
  cout<<"The greatest common divisor is: "<<masterAguayo(num1,num2, gcd)<<endl;
  return 0;
}
