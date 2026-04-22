#include <iostream>

using namespace std;

int main(){
	int num;
	
	cout<<"Enter number:";
	cin>>num;
	
	if(num>0){
		cout<<"positive:"<<endl;
	}else if(num<0){
		cout<<"negative:"<<endl;
	}else {
		cout<<"The number is zero:"<<endl;
	}
	return 0;
}
