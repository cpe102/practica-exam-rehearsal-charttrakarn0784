#include<iostream>
#include<string>
using namespace std;

int main(){
	string Name;
	double gpa;
	cout << "What is your name?: ";
	cin >> Name;
	cout << "What is your GPA?: ";
	cin >> gpa;
	if(gpa >= 3.50){
		cout << Name << " InW Jrim Jrim!!!";
	}else{
		cout << "Try harder, "<< Name << "!!!";
	}
	return 0;
}