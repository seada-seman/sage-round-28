#include <iostream>

using namespace std;

	double sum (int x, int y, int z){
		return x+y+z;
	}
   
int main(){

	int x;
	int y;
	int z;
	
	cout<<"enter first number: ";
	cin>>x;
	cout<<"enter seconde number: ";
	cin>>y;
	cout<<"enter third  number: ";
	cin>>z;
	
	cout<<"x+y+z: "<<sum(x,y,z) <<endl;
	
	return 0;
}
