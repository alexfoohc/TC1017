#include <iostream>
#include <cmath>
#include <iomanip>
using std::endl;
using std::cout;
using std::cin;
using std::setprecision;
int getFactorial (int n){
  if (n==1 || n==0)
  return 1;
  else
  return n*getFactorial (n-1);
}
int precise_num (long double x){
  int num=0;
  while (x<0.9) {
    num++;
    x*=10;
  }
  return num;
}
long double eul_calc(long double x){
  long double e=0.0, e1=0.0, e2=0.0, pre=x+1;
  for (int n = 0; pre>x; n++) {
    e1=e2;
    e=e+(1.0/getFactorial (n));
    e2=e;
    pre=e2-e1;
  }
  return e;
    }

int  main (){
    long double precision, e;
  cout <<"This program gives you the euler number with the precision that you want"<<endl;
  cout <<"Give me the precision that you want. Example (.0001) "<<endl;
  cin >> precision;
  e=eul_calc(precision);
  cout <<"The euler number is: "<<setprecision(precise_num(precision))<<e<<endl;

return 0;
}
