#include <iostream>

using namespace std;

string clacGrade(double score){
	if(score>=90){
		return"A+";
	}else if(score>=85){
		return"A";
	}else if(score>=80){
		return"A-";
	}else if(score>=70){
		return"B";
	}else if(score>=60){
		return"C";
	}else {
		return"D";
     }
 }

int main(){
	double scoreAbebe;
	double scoreKebede;
	
		cout<<"enter scoreAbebe: ";
	    cin>>scoreAbebe;
		cout<<"enter scoreKebede: ";
	    cin>>scoreKebede;
	    
		cout<<"Abebe grade: "<< clacGrade(scoreAbebe)<<endl;
		cout<<"Kebede grade: "<< clacGrade(scoreKebede)<<endl;
	return 0;
}
