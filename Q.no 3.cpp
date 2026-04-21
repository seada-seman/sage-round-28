#include <iostream>

using namespace std;

int main(){
	const float pi=3.14;
	float radius,circumference;
	cout<<"Enter radius: ";
	cin>>radius;
	circumference=(2*pi*radius);
	cout<<"Circumference: "<<circumference<<endl;
	return 0;
}
