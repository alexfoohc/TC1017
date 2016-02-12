#include <iostream>
using namespace std;
int stars (int num, int b)
{
  b=0;
  do {
    cout <<"*";
    b=b+1;
  } while(b!=num);
  return b;
}
int main ()
{
  int num, b;
  char answ;
  do {
  cout <<"Type the amount of stars that you want"<<endl;
  cin >>num;
  stars (num,b);
  cout <<"  Would you like to try again? y/n"<<endl;
  cin >>answ;
}while (answ=='y');
  return 0;
}
