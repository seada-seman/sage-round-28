#include <iostream>

using namespace std;

int main(){
	int a=50,b=50;
	bool greater = a>b;
	bool lessthan = a<b;
	bool lessthanOrequal = a<=b;
	bool greaterOrequal = a>=b;
	bool Equal = a==b;
	bool NotEqual = a!=b;
	
	cout<<"a: "<<a<<" "<<"b: "<<b<<endl;
	cout<<"Greaterthan: "<<greater<<endl;
	cout<<"Lessthan: "<<lessthan<<endl;
	cout<<"Lessthan OR Equal: "<<lessthanOrequal<<endl;
	cout<<"Greater Or Equal: "<<greaterOrequal<<endl;
	cout<<"Equal: "<<Equal<<endl;
	cout<<"Not Equal: "<<NotEqual<<endl;
	
	bool logicaloperator = true || false;
	cout<<"logical operator: "<<logicaloperator<<endl;
	return 0;
}
