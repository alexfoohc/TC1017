#include <iostream>
using namespace std;
int superpower (int a, int b)
{
  int c, d;
  c=1;
  d=0;
  do {
  c=a*c;
  d=d+1;
  } while (d!=b);
  return c;
}
int main()
{
  int a, b, c, d;
  char answ;
  do{
  cout <<"Type a number"<<endl;
  cin >>a;
  cout <<"Type another number"<<endl;
  cin >>b;
  c=superpower (a,b);
  cout <<"The result is: "<<c<<endl;
  cout <<"Would you like to try again? y/n"<<endl;
  cin >>answ;
}while(answ=='y');
  return 0;
}
