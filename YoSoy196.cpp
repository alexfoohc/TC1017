#include <iostream>
#include "BigIntegerLibrary.hh"
using namespace std;
BigInteger reverse(BigInteger value){
   BigInteger reversed=0;
   while (value!=0) {
    reversed=reversed*10+(value%10);
    value=value/10;
   }
   return reversed;
}
BigInteger lychrel_converter(BigInteger value){
  BigInteger suma;
  int intentos=0,resp;
  if (value==reverse(value)) {
    resp=1;
  }
  else {
    suma=value+reverse(value);
    while (intentos!=30 && suma!=reverse(suma)) {
      suma=suma+reverse(suma);
      intentos=intentos+1; }
      if (intentos==30) {
        resp=2;
        cout <<value<<" " << "is a Lychrel candidate"<<endl;
      }
      else {
        resp=3;
      }
  }
  return resp;
}

int main(){
  int low, upp, intentos2, candidato, add;
  BigInteger value;
  cout <<"Type the lower bound of the sequence"<<endl;
  cin >>low;
  cout <<"Type the upper bound of the sequence"<<endl;
  cin >>upp;
  add=0;
  intentos2=0;
  candidato=0;
  for (int i = 0; value != upp; i=i+1) {
    value=low+i;
    if(lychrel_converter(value)==1) {
        add=add+1; }
        else if(lychrel_converter(value)==2){
          candidato=candidato+1; }
          else {
            intentos2=intentos2+1; }
     }
              cout<<"Lychrel´s"<<" "<<candidato<<endl;
              cout<<"Natural palindrome"<<" "<<add<<endl;
              cout<<"More tries palindromes"<<" "<<intentos2<<endl;
    return 0;
  }
