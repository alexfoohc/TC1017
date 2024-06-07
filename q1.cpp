#include <iostream>
using namespace std;
void triangles (int size){
	int length=0;
	for (int i=0; i<size*2; i++){
		cout <<"T"<<endl;
		length ++;

	}
 }
int main(){
	int size;
	cout <<"Introduce the size of the the triangle"<<endl;
	cin>>size;
	triangles(size);
}
