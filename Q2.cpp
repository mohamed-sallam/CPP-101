#include <iostream>
using namespace std;
int main() {
	int s=0,n;
	cout<<"Enter numbers to calculate the sum. of the even numbers: "; cin>>n;
	while(n>0){
		if(!((n%10)%2)) s+=n%10;   //Or if(((n%10)%2) == 0) s+=n%10;
		n/=10;	
	} 
	cout<<"Sum= "<<s;
}

