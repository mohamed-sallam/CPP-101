#include <iostream>
using namespace std;
int main() {
	/*int i=1,j,k,f=1,s=0;
	float n;
	cout<<"1!+3!+5!+7!+...+N\nEnter N: "; cin>>n;
	while(n>1){
		n/=i;
		i++;
	} i--;
	if(n==1 && i%2){
		for(j=1;j<=i;j+=2){
			for(k=1;k<=j;k++)f*=k;
			s+=f; f=1;
		}
		cout<<"Sum= "<<s;
	}else cout<<"Error";*/ //This is the old algorithm designed by Mohamed Sallam
	//The new one is designed by Mahmoud Abdulnasser
	int f=1,s=0,i,n;
	cout<<"1!+3!+5!+7!+...+N\nEnter N: "; cin>>n;
	for(i=1;f<=n;i++){
		f*=i;
		if(i%2) s+=f;    //Or if(i%2==1) s+=f;
	}
	cout<<"Sum= "<<s; 
}

