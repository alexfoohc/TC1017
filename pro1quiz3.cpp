#include <iostream>
#include <cmath>
using namespace std;
float distance (float x1, float x2, float y1, float y2)
{
  float a, b, c;
  a=x2-x1;
  b=y2-y1;
  c=sqrt(a*a+b*b);
  return c;
}
int main ()
{
  float a,b,c,x1,x2,y1,y2;
  cout <<"Hello, this program gives you the distance between the two points in the cartesian plane"<<endl;
  cout <<"Type a value for x1"<< endl;
  cin >>x1;
  cout <<"Type a value for x2"<<endl;
  cin >>x2;
  cout <<"Type a value for y1"<<endl;
  cin >>y1;
  cout <<"Type a value for y2"<<endl;
  cin >>y2;
  c=distance (x1,x2,y1,y2);
  cout <<"The distance is: "<<c<<endl;
  return 0;
}
