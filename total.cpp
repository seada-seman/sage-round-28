#include <iostream>

using namespace std;

int main(){
	
	int numbers[5];
	int total=0;
	cout<<"Enter number: ";
	for(int i=0; i<=4;i++){
			
	    cin>>numbers[i];
	}
	 for(int i=0; i<=4;i++){
	 	total= total+numbers[i];
	}
	cout<<"total: "<<total;
	return 0;
}
