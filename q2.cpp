#include <iostream>
#include <cmath>
using namespace std;
long superpower (long a, long b){
	long power;
	power=pow(a,b);
	return power;
}

int main (){
	long a, b, power;
	cout<<"Introduce your first parameter"<<endl;
	cin>> a;
	cout<<"Introduce your second parameter"<<endl;
	cin>> b;
	cout<<"The result is: "<< superpower(a,b);
	return 0;
}

	

