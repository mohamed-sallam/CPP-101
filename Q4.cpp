#include <iostream>
#include<math.h>
using namespace std;
int main() {
	float x,s=0,f=1; int n,i;
	cout<<"x-x^2/2!+x^3/3!-x^4/4!+x^5/5!-...+x^n/n!\nEnter x:\n"; cin>>x;
	cout<<"Enter n:\n"; cin>>n;
	for(i=1;i<=n;i++){
		f*=i;
		s+=pow(-1,i+1)*pow(x,i)/f;
	}
	cout<<"Sum= "<<s;
}

