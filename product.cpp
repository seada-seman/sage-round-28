#include <iostream>

using namespace std;


int product(int x, int y){
	return x*y;
}
int product(int x, int y, int k){
	return x*y*k;
}
int main(){
		
	cout<<"product: "<<product(2,3,4) <<endl;
	
	return 0;
}

