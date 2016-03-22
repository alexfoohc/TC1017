#include <iostream>
using namespace std;
int find_threes(int num[], int num_of_num){
  int answer=0;
  int total=0;
  int numb;
  for (int i = 0; i < num_of_num; i++) {
    numb=num[i];
    if (numb%3==0) {
      answer=answer+1;
      total=total+numb;
    }
    else {}
  }
  cout<<"The result of the addition of the numbers divisible by 3 is: "<<total<<endl;
  return total;
}
int main()
{
  int numofnum;
  cout <<"How many numbers are you going to sum?"<<endl;
  cin>>numofnum;
  int num[numofnum];
  for (int i = 0; i < numofnum; i++) {
    cout <<"Type a number"<<endl;
    cin>>num[i];
  }
  find_threes(num, numofnum);
  return 0;
  }
