#include<iostream>
using namespace std;

int main(){
	double sum=0,x=1;
	while(x != 0){
	cout << "Enter x: ";
	cin >> x;
	if(x < 0){
		sum += 0;
	}else{
	sum += x;
	}
}
	cout << "sum = "<<sum;
	return 0;
}