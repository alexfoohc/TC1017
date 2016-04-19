#include<iostream>
using namespace std;
long fibonacci (long n){
	if (n==1){
	return 1;}
	else if (n<0){
	return 0;}
	else{
	 return fibonacci(n-1)+fibonacci(n-2);}
}
int main (){
	long n;
	cout<<"Type a number: "<<endl;
	cin>> n;
	cout<<"The fibonacci for that number is: "<<fibonacci(n)<<endl;
	return 0;
}
