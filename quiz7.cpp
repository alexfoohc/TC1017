#include <iostream>
using std::cin;
using std::cout;
using std::endl;
double dot_product(double l1[], double l2[], int number)
{
  double prod=0;
  for (int i = 0; i < number; i++) {
    prod=prod+(l1[i]*l2[i]);
  }
return prod;
}
int main ()
{
  int number;
cout<<"Enter the number of values for the first list"<<endl;
cin>>number;
double prod, l1[number], l2[number];
for (int i = 0; i < number; i++) {
  cout<<"Type the "<<i+1<<" value for the first list"<<endl;
  cin>>l1[i];
  }
for (int i = 0; i < number; i++) {
  cout<<"Type the "<<i+1<<" value for the second list"<<endl;
  cin>>l2[i];
  }
  prod=dot_product(l1,l2,number);
  cout<<"The result is: "<<prod<<endl;
return 0;
}
