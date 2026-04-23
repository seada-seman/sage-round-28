#include <iostream>

using namespace std;

int main(){
	
	int numbers[5];
	int smallnumber;
	cout<<"Enter number: ";
	for(int i=0; i<=4;i++){
			
	    cin>>numbers[i];
	}
	smallnumber=numbers[0];
	 for(int i=0; i<=4;i++){
	 	if(smallnumber>numbers[i]){
	 		smallnumber=numbers[i];
		 }
	}
	cout<<"small: "<<smallnumber;
	return 0;
}
