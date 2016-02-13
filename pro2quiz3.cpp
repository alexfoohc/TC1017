#include <iostream>
using namespace std;
 int fibonacci (int n)
{
  if (n==1) {
  return 1;
  }
  else if (n<=0){
    return 0;
  }
  else
  {
    return fibonacci(n-1)+fibonacci(n-2);
  }
}
int main ()
{
  int n;
  char answ;
  do{
  cout <<"Type a number"<<endl;
  cin >>n;
  cout <<"The fibonacci number is "<<fibonacci (n)<<endl;
  cout <<"Would you like to try it again? y/n"<<endl;
  cin >>answ;
}while(answ=='y');
  return 0;

}
