#include <iostream>
using std:: cout;
using std:: endl;
int factorial (int x){
  if (x==0){
    return 1;
  }
  else
  {
    return x*factorial(x-1);
  }
}
/*
Calculate e by the infinite sum of 1/n! for n

*/

float euler_calc(float precision){
  float e=0.0, previous=-1000000;
  int n=0;
  do{
   previous=e;
  e=e+1.0/factorial (n);
  n=n+1;
  cout <<"For n of "<< n<< ", e is: "<< e<<endl;
} while ((e-previous)>precision);
  return e;
}
int main ()
{
  float answer= euler_calc(0.001);
  cout <<"The answer is: "<<answer<<endl;
}
