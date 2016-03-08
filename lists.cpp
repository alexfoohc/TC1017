#include <iostream>
#include <cmath>
using std::endl;
using std::cout;
using std::cin;
float getTotal (float numbers[], int number_of_numbers){
  float answer=0.0;
  for (int i = 0; i < number_of_numbers; i++) {
  answer=answer+numbers[i];
  }
  return answer;
}
float getAverage (float numbers[], int number_of_numbers)
{
  float answer= getTotal (numbers, number_of_numbers)/number_of_numbers;

  return answer;
}
float standard_deviation (float numbers[], int number_of_numbers)
{
  float suma=0.0;
  for (int i = 0; i < number_of_numbers; i=i+1) {
    float answer=pow(getAverage(numbers, number_of_numbers)- numbers[i], 2);
    suma=suma+answer;
  }
  float a=sqrt(suma/(number_of_numbers-1));
  return a;
}
int main ()
{
  const int NUMBER_OF_NUMBERS=10;
  float x[NUMBER_OF_NUMBERS];
  for (int i=0; i < NUMBER_OF_NUMBERS; i++) {
    cout <<"Type a number"<<endl;
    cin >>x[i];
  }
  float total= getTotal(x, NUMBER_OF_NUMBERS);
  float average= getAverage(x, NUMBER_OF_NUMBERS);
  float standard= standard_deviation(x, NUMBER_OF_NUMBERS);
  cout <<"Your total is: "<<total<<endl;
  cout <<"Your average is: "<<average<<endl;
  cout <<"The standard deviation of the data is: "<<standard<<endl;
return 0;
}
