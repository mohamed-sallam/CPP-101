#include <iostream>
using namespace std;
int main() {
	int i;
	float n[10];
	cout<<"Enter 10 numbers to print the numbers which\nbigger than the avg and to print the max : "; 
	cin>>n[0]; float max=n[0]; float s=n[0];
	for(i=1;i<10;i++){
		cin>>n[i];
		s+=n[i];
		if(max<n[i])max=n[i];
	}
	cout<<"\nThe numbers which bigger than the avg are: ";
	for(i=0;i<10;i++){
		if(n[i]>s/10) cout<<n[i]<<'\t';
	}
	cout<<"\n\nmax= "<<max;
}


